object frmKayitGirisi: TfrmKayitGirisi
  Left = 190
  Top = 106
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Kayýt Giriþi'
  ClientHeight = 356
  ClientWidth = 585
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 24
    Width = 585
    Height = 313
    TabOrder = 0
    object PageControl1: TPageControl
      Left = 8
      Top = 12
      Width = 575
      Height = 299
      ActivePage = TabSheet1
      Style = tsButtons
      TabOrder = 0
      object TabSheet1: TTabSheet
        Caption = '01. Koþu'
        OnShow = TabSheet1Show
        object DBGrid1: TDBGrid
          Left = 0
          Top = 24
          Width = 565
          Height = 240
          DataSource = dsrcKAYIT01
          PopupMenu = PopupMenu1
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          OnKeyPress = DBGrid1KeyPress
          Columns = <
            item
              Expanded = False
              FieldName = 'HANDIKAP'
              Title.Alignment = taCenter
              Title.Caption = 'Handikap'
              Width = 60
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ATIN_ADI'
              Title.Alignment = taCenter
              Title.Caption = 'Atýn Adý'
              Width = 100
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ORJINI'
              Title.Alignment = taCenter
              Title.Caption = 'Orjini'
              Width = 178
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ANTRENOR'
              Title.Alignment = taCenter
              Title.Caption = 'Antrenör'
              Width = 80
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'YASI'
              Title.Alignment = taCenter
              Title.Caption = 'Yaþý'
              Width = 40
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'DERECESI'
              Title.Alignment = taCenter
              Title.Caption = 'Derecesi'
              Width = 70
              Visible = True
            end>
        end
        object dbeditKAYIT01: TDBEdit
          Left = 0
          Top = 0
          Width = 449
          Height = 21
          DataField = 'KOSU01'
          DataSource = dsrcACIKLAMA
          TabOrder = 1
          OnChange = dbeditKAYIT01Change
          OnKeyPress = dbeditKAYIT01KeyPress
        end
        object DBComboBox2: TDBComboBox
          Left = 456
          Top = 0
          Width = 105
          Height = 21
          Style = csDropDownList
          DataField = 'TUR01'
          DataSource = dsrcACIKLAMA
          ItemHeight = 13
          Items.Strings = (
            'ÝNGÝLÝZ'
            'ARAP')
          TabOrder = 2
          OnChange = DBComboBox2Change
        end
      end
      object TabSheet2: TTabSheet
        Caption = '02. Koþu'
        ImageIndex = 1
        OnShow = TabSheet2Show
        object DBGrid2: TDBGrid
          Left = 0
          Top = 24
          Width = 565
          Height = 240
          DataSource = dsrcKAYIT02
          PopupMenu = PopupMenu1
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          OnKeyPress = DBGrid2KeyPress
          Columns = <
            item
              Expanded = False
              FieldName = 'HANDIKAP'
              Title.Alignment = taCenter
              Title.Caption = 'Handikap'
              Width = 60
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ATIN_ADI'
              Title.Alignment = taCenter
              Title.Caption = 'Atýn Adý'
              Width = 100
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ORJINI'
              Title.Alignment = taCenter
              Title.Caption = 'Orjini'
              Width = 178
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ANTRENOR'
              Title.Alignment = taCenter
              Title.Caption = 'Antrenör'
              Width = 80
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'YASI'
              Title.Alignment = taCenter
              Title.Caption = 'Yaþý'
              Width = 40
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'DERECESI'
              Title.Alignment = taCenter
              Title.Caption = 'Derecesi'
              Width = 70
              Visible = True
            end>
        end
        object dbeditKAYIT02: TDBEdit
          Left = 0
          Top = 0
          Width = 449
          Height = 21
          DataField = 'KOSU02'
          DataSource = dsrcACIKLAMA
          TabOrder = 1
          OnChange = dbeditKAYIT02Change
          OnKeyPress = dbeditKAYIT02KeyPress
        end
        object DBComboBox3: TDBComboBox
          Left = 456
          Top = 0
          Width = 105
          Height = 21
          DataField = 'TUR02'
          DataSource = dsrcACIKLAMA
          ItemHeight = 13
          Items.Strings = (
            'ÝNGÝLÝZ'
            'ARAP')
          TabOrder = 2
          OnChange = DBComboBox3Change
        end
      end
      object TabSheet3: TTabSheet
        Caption = '03. Koþu'
        ImageIndex = 2
        OnShow = TabSheet3Show
        object DBGrid3: TDBGrid
          Left = 0
          Top = 24
          Width = 565
          Height = 240
          DataSource = dsrcKAYIT03
          PopupMenu = PopupMenu1
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          OnKeyPress = DBGrid3KeyPress
          Columns = <
            item
              Expanded = False
              FieldName = 'HANDIKAP'
              Title.Alignment = taCenter
              Title.Caption = 'Handikap'
              Width = 60
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ATIN_ADI'
              Title.Alignment = taCenter
              Title.Caption = 'Atýn Adý'
              Width = 100
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ORJINI'
              Title.Alignment = taCenter
              Title.Caption = 'Orjini'
              Width = 178
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ANTRENOR'
              Title.Alignment = taCenter
              Title.Caption = 'Antrenör'
              Width = 80
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'YASI'
              Title.Alignment = taCenter
              Title.Caption = 'Yaþý'
              Width = 40
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'DERECESI'
              Title.Alignment = taCenter
              Title.Caption = 'Derecesi'
              Width = 70
              Visible = True
            end>
        end
        object dbeditKAYIT03: TDBEdit
          Left = 0
          Top = 0
          Width = 449
          Height = 21
          DataField = 'KOSU03'
          DataSource = dsrcACIKLAMA
          TabOrder = 1
          OnChange = dbeditKAYIT03Change
          OnKeyPress = dbeditKAYIT03KeyPress
        end
        object DBComboBox4: TDBComboBox
          Left = 456
          Top = 0
          Width = 105
          Height = 21
          DataField = 'TUR03'
          DataSource = dsrcACIKLAMA
          ItemHeight = 13
          Items.Strings = (
            'ÝNGÝLÝZ'
            'ARAP')
          TabOrder = 2
          OnChange = DBComboBox4Change
        end
      end
      object TabSheet4: TTabSheet
        Caption = '04. Koþu'
        ImageIndex = 3
        OnShow = TabSheet4Show
        object DBGrid4: TDBGrid
          Left = 0
          Top = 24
          Width = 565
          Height = 240
          DataSource = dsrcKAYIT04
          PopupMenu = PopupMenu1
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          OnKeyPress = DBGrid4KeyPress
          Columns = <
            item
              Expanded = False
              FieldName = 'HANDIKAP'
              Title.Alignment = taCenter
              Title.Caption = 'Handikap'
              Width = 60
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ATIN_ADI'
              Title.Alignment = taCenter
              Title.Caption = 'Atýn Adý'
              Width = 100
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ORJINI'
              Title.Alignment = taCenter
              Title.Caption = 'Orjini'
              Width = 178
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ANTRENOR'
              Title.Alignment = taCenter
              Title.Caption = 'Antrenör'
              Width = 80
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'YASI'
              Title.Alignment = taCenter
              Title.Caption = 'Yaþý'
              Width = 40
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'DERECESI'
              Title.Alignment = taCenter
              Title.Caption = 'Derecesi'
              Width = 70
              Visible = True
            end>
        end
        object dbeditKAYIT04: TDBEdit
          Left = 0
          Top = 0
          Width = 449
          Height = 21
          DataField = 'KOSU04'
          DataSource = dsrcACIKLAMA
          TabOrder = 1
          OnChange = dbeditKAYIT04Change
          OnKeyPress = dbeditKAYIT04KeyPress
        end
        object DBComboBox5: TDBComboBox
          Left = 456
          Top = 0
          Width = 105
          Height = 21
          DataField = 'TUR04'
          DataSource = dsrcACIKLAMA
          ItemHeight = 13
          Items.Strings = (
            'ÝNGÝLÝZ'
            'ARAP')
          TabOrder = 2
          OnChange = DBComboBox5Change
        end
      end
      object TabSheet5: TTabSheet
        Caption = '05. Koþu'
        ImageIndex = 4
        OnShow = TabSheet5Show
        object DBGrid5: TDBGrid
          Left = 0
          Top = 24
          Width = 565
          Height = 240
          DataSource = dsrcKAYIT05
          PopupMenu = PopupMenu1
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          OnKeyPress = DBGrid5KeyPress
          Columns = <
            item
              Expanded = False
              FieldName = 'HANDIKAP'
              Title.Alignment = taCenter
              Title.Caption = 'Handikap'
              Width = 60
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ATIN_ADI'
              Title.Alignment = taCenter
              Title.Caption = 'Atýn Adý'
              Width = 100
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ORJINI'
              Title.Alignment = taCenter
              Title.Caption = 'Orjini'
              Width = 178
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ANTRENOR'
              Title.Alignment = taCenter
              Title.Caption = 'Antrenör'
              Width = 80
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'YASI'
              Title.Alignment = taCenter
              Title.Caption = 'Yaþý'
              Width = 40
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'DERECESI'
              Title.Alignment = taCenter
              Title.Caption = 'Derecesi'
              Width = 70
              Visible = True
            end>
        end
        object dbeditKAYIT05: TDBEdit
          Left = 0
          Top = 0
          Width = 449
          Height = 21
          DataField = 'KOSU05'
          DataSource = dsrcACIKLAMA
          TabOrder = 1
          OnChange = dbeditKAYIT05Change
          OnKeyPress = dbeditKAYIT05KeyPress
        end
        object DBComboBox6: TDBComboBox
          Left = 456
          Top = 0
          Width = 105
          Height = 19
          Style = csOwnerDrawFixed
          DataField = 'TUR05'
          DataSource = dsrcACIKLAMA
          ItemHeight = 13
          Items.Strings = (
            'ÝNGÝLÝZ'
            'ARAP')
          TabOrder = 2
          OnChange = DBComboBox6Change
        end
      end
      object TabSheet6: TTabSheet
        Caption = '06. Koþu'
        ImageIndex = 5
        OnShow = TabSheet6Show
        object DBGrid6: TDBGrid
          Left = 0
          Top = 24
          Width = 565
          Height = 240
          DataSource = dsrcKAYIT06
          PopupMenu = PopupMenu1
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          OnKeyPress = DBGrid6KeyPress
          Columns = <
            item
              Expanded = False
              FieldName = 'HANDIKAP'
              Title.Alignment = taCenter
              Title.Caption = 'Handikap'
              Width = 60
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ATIN_ADI'
              Title.Alignment = taCenter
              Title.Caption = 'Atýn Adý'
              Width = 100
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ORJINI'
              Title.Alignment = taCenter
              Title.Caption = 'Orjini'
              Width = 178
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ANTRENOR'
              Title.Alignment = taCenter
              Title.Caption = 'Antrenör'
              Width = 80
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'YASI'
              Title.Alignment = taCenter
              Title.Caption = 'Yaþý'
              Width = 40
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'DERECESI'
              Title.Alignment = taCenter
              Title.Caption = 'Derecesi'
              Width = 70
              Visible = True
            end>
        end
        object dbeditKAYIT06: TDBEdit
          Left = 0
          Top = 0
          Width = 449
          Height = 21
          DataField = 'KOSU06'
          DataSource = dsrcACIKLAMA
          TabOrder = 1
          OnChange = dbeditKAYIT06Change
          OnKeyPress = dbeditKAYIT06KeyPress
        end
        object DBComboBox7: TDBComboBox
          Left = 456
          Top = 0
          Width = 105
          Height = 21
          DataField = 'TUR06'
          DataSource = dsrcACIKLAMA
          ItemHeight = 13
          Items.Strings = (
            'ÝNGÝLÝZ'
            'ARAP')
          TabOrder = 2
          OnChange = DBComboBox7Change
        end
      end
      object TabSheet7: TTabSheet
        Caption = '07. Koþu'
        ImageIndex = 6
        OnShow = TabSheet7Show
        object DBGrid7: TDBGrid
          Left = 0
          Top = 24
          Width = 565
          Height = 240
          DataSource = dsrcKAYIT07
          PopupMenu = PopupMenu1
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          OnKeyPress = DBGrid7KeyPress
          Columns = <
            item
              Expanded = False
              FieldName = 'HANDIKAP'
              Title.Alignment = taCenter
              Title.Caption = 'Handikap'
              Width = 60
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ATIN_ADI'
              Title.Alignment = taCenter
              Title.Caption = 'Atýn Adý'
              Width = 100
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ORJINI'
              Title.Alignment = taCenter
              Title.Caption = 'Orjini'
              Width = 178
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ANTRENOR'
              Title.Alignment = taCenter
              Title.Caption = 'Antrenör'
              Width = 80
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'YASI'
              Title.Alignment = taCenter
              Title.Caption = 'Yaþý'
              Width = 40
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'DERECESI'
              Title.Alignment = taCenter
              Title.Caption = 'Derecesi'
              Width = 70
              Visible = True
            end>
        end
        object dbeditKAYIT07: TDBEdit
          Left = 0
          Top = 0
          Width = 449
          Height = 21
          DataField = 'KOSU07'
          DataSource = dsrcACIKLAMA
          TabOrder = 1
          OnChange = dbeditKAYIT07Change
          OnKeyPress = dbeditKAYIT07KeyPress
        end
        object DBComboBox8: TDBComboBox
          Left = 456
          Top = 0
          Width = 105
          Height = 21
          DataField = 'TUR07'
          DataSource = dsrcACIKLAMA
          ItemHeight = 13
          Items.Strings = (
            'ÝNGÝLÝZ'
            'ARAP')
          TabOrder = 2
          OnChange = DBComboBox8Change
        end
      end
      object TabSheet8: TTabSheet
        Caption = '08. Koþu'
        ImageIndex = 7
        OnShow = TabSheet8Show
        object DBGrid8: TDBGrid
          Left = 0
          Top = 24
          Width = 565
          Height = 240
          DataSource = dsrcKAYIT08
          PopupMenu = PopupMenu1
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          OnKeyPress = DBGrid8KeyPress
          Columns = <
            item
              Expanded = False
              FieldName = 'HANDIKAP'
              Title.Alignment = taCenter
              Title.Caption = 'Handikap'
              Width = 60
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ATIN_ADI'
              Title.Alignment = taCenter
              Title.Caption = 'Atýn Adý'
              Width = 100
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ORJINI'
              Title.Alignment = taCenter
              Title.Caption = 'Orjini'
              Width = 178
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ANTRENOR'
              Title.Alignment = taCenter
              Title.Caption = 'Antrenör'
              Width = 80
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'YASI'
              Title.Alignment = taCenter
              Title.Caption = 'Yaþý'
              Width = 40
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'DERECESI'
              Title.Alignment = taCenter
              Title.Caption = 'Derecesi'
              Width = 70
              Visible = True
            end>
        end
        object dbeditKAYIT08: TDBEdit
          Left = 0
          Top = 0
          Width = 449
          Height = 21
          DataField = 'KOSU08'
          DataSource = dsrcACIKLAMA
          TabOrder = 1
          OnChange = dbeditKAYIT08Change
          OnKeyPress = dbeditKAYIT08KeyPress
        end
        object DBComboBox9: TDBComboBox
          Left = 456
          Top = 0
          Width = 105
          Height = 21
          DataField = 'TUR08'
          DataSource = dsrcACIKLAMA
          ItemHeight = 13
          Items.Strings = (
            'ÝNGÝLÝZ'
            'ARAP')
          TabOrder = 2
          OnChange = DBComboBox9Change
        end
      end
      object TabSheet9: TTabSheet
        Caption = '09. Koþu'
        ImageIndex = 8
        OnShow = TabSheet9Show
        object DBGrid9: TDBGrid
          Left = 0
          Top = 24
          Width = 565
          Height = 240
          DataSource = dsrcKAYIT09
          PopupMenu = PopupMenu1
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          OnKeyPress = DBGrid9KeyPress
          Columns = <
            item
              Expanded = False
              FieldName = 'HANDIKAP'
              Title.Alignment = taCenter
              Title.Caption = 'Handikap'
              Width = 60
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ATIN_ADI'
              Title.Alignment = taCenter
              Title.Caption = 'Atýn Adý'
              Width = 100
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ORJINI'
              Title.Alignment = taCenter
              Title.Caption = 'Orjini'
              Width = 178
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ANTRENOR'
              Title.Alignment = taCenter
              Title.Caption = 'Antrenör'
              Width = 80
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'YASI'
              Title.Alignment = taCenter
              Title.Caption = 'Yaþý'
              Width = 40
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'DERECESI'
              Title.Alignment = taCenter
              Title.Caption = 'Derecesi'
              Width = 70
              Visible = True
            end>
        end
        object dbeditKAYIT09: TDBEdit
          Left = 0
          Top = 0
          Width = 449
          Height = 21
          DataField = 'KOSU09'
          DataSource = dsrcACIKLAMA
          TabOrder = 1
          OnChange = dbeditKAYIT09Change
          OnKeyPress = dbeditKAYIT09KeyPress
        end
        object DBComboBox10: TDBComboBox
          Left = 456
          Top = 0
          Width = 105
          Height = 21
          DataField = 'TUR09'
          DataSource = dsrcACIKLAMA
          ItemHeight = 13
          Items.Strings = (
            'ÝNGÝLÝZ'
            'ARAP')
          TabOrder = 2
          OnChange = DBComboBox10Change
        end
      end
      object TabSheet10: TTabSheet
        Caption = '10. Koþu'
        ImageIndex = 9
        OnShow = TabSheet10Show
        object DBGrid10: TDBGrid
          Left = 0
          Top = 24
          Width = 565
          Height = 240
          DataSource = dsrcKAYIT10
          PopupMenu = PopupMenu1
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          OnKeyPress = DBGrid10KeyPress
          Columns = <
            item
              Expanded = False
              FieldName = 'HANDIKAP'
              Title.Alignment = taCenter
              Title.Caption = 'Handikap'
              Width = 60
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ATIN_ADI'
              Title.Alignment = taCenter
              Title.Caption = 'Atýn Adý'
              Width = 100
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ORJINI'
              Title.Alignment = taCenter
              Title.Caption = 'Orjini'
              Width = 178
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ANTRENOR'
              Title.Alignment = taCenter
              Title.Caption = 'Antrenör'
              Width = 80
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'YASI'
              Title.Alignment = taCenter
              Title.Caption = 'Yaþý'
              Width = 40
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'DERECESI'
              Title.Alignment = taCenter
              Title.Caption = 'Derecesi'
              Width = 70
              Visible = True
            end>
        end
        object dbeditKAYIT10: TDBEdit
          Left = 0
          Top = 0
          Width = 449
          Height = 21
          DataField = 'KOSU10'
          DataSource = dsrcACIKLAMA
          TabOrder = 1
          OnChange = dbeditKAYIT10Change
          OnKeyPress = dbeditKAYIT10KeyPress
        end
        object DBComboBox1: TDBComboBox
          Left = 456
          Top = 0
          Width = 105
          Height = 21
          DataField = 'TUR10'
          DataSource = dsrcACIKLAMA
          ItemHeight = 13
          Items.Strings = (
            'ÝNGÝLÝZ'
            'ARAP')
          TabOrder = 2
          OnChange = DBComboBox1Change
        end
      end
    end
  end
  object ToolBar1: TToolBar
    Left = 0
    Top = 0
    Width = 585
    Height = 29
    Caption = 'ToolBar1'
    Flat = True
    Images = ImageList1
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    object ToolButton13: TToolButton
      Left = 0
      Top = 0
      Width = 8
      Caption = 'ToolButton13'
      ImageIndex = 2
      Style = tbsSeparator
    end
    object DateTimePicker1: TDateTimePicker
      Left = 8
      Top = 0
      Width = 103
      Height = 22
      CalAlignment = dtaLeft
      Date = 37075.4576590278
      Time = 37075.4576590278
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 0
      OnChange = DateTimePicker1Change
    end
    object ToolButton3: TToolButton
      Left = 111
      Top = 0
      Hint = 'Yeni'
      Caption = 'ToolButton3'
      ImageIndex = 0
      OnClick = ToolButton3Click
    end
    object ToolButton4: TToolButton
      Left = 134
      Top = 0
      Hint = 'Kaydet'
      Caption = 'ToolButton4'
      ImageIndex = 1
      OnClick = ToolButton4Click
    end
    object ToolButton5: TToolButton
      Left = 157
      Top = 0
      Hint = 'Sil'
      Caption = 'ToolButton5'
      ImageIndex = 2
      OnClick = ToolButton5Click
    end
    object ToolButton8: TToolButton
      Left = 180
      Top = 0
      Width = 8
      Caption = 'ToolButton8'
      ImageIndex = 4
      Style = tbsSeparator
    end
    object ToolButton9: TToolButton
      Left = 188
      Top = 0
      Hint = 'Dosyaya Kaydet'
      Caption = 'ToolButton9'
      ImageIndex = 3
      OnClick = ToolButton9Click
    end
    object ToolButton10: TToolButton
      Left = 211
      Top = 0
      Width = 8
      Caption = 'ToolButton10'
      ImageIndex = 5
      Style = tbsSeparator
    end
    object ToolButton6: TToolButton
      Left = 219
      Top = 0
      Hint = 'At Ara'
      Caption = 'ToolButton6'
      ImageIndex = 6
      OnClick = ToolButton6Click
    end
    object ToolButton12: TToolButton
      Left = 242
      Top = 0
      Hint = 'Yenile'
      Caption = 'ToolButton12'
      ImageIndex = 5
      OnClick = ToolButton12Click
    end
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 337
    Width = 585
    Height = 19
    Panels = <
      item
        Alignment = taCenter
        Text = 'Girilen At Sayýsý'
        Width = 90
      end
      item
        Alignment = taCenter
        Width = 100
      end
      item
        Alignment = taCenter
        Text = 'Koþu No'
        Width = 65
      end
      item
        Alignment = taCenter
        Width = 100
      end
      item
        Width = 50
      end>
    SimplePanel = False
  end
  object ImageList1: TImageList
    Left = 624
    Top = 192
    Bitmap = {
      494C010108000900040010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000003000000001001000000000000018
      0000000000000000000000000000000000002926A529BC24A3283C27A422B422
      232A8E22B8220000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000088000000020000005F38F87F832E7E3FD62E5F3F010000001F66FA7F0800
      000000000000231D3C28B2272729A12600230000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000880000000500
      0000C31FF77F832E7F3FD72E5F3F030000003B20F97F0800000000000000231D
      BC2B2927A427B729BC29B929B4222D2EB029B427B2223317252C250000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000008800000005000000A756F87F832E
      7F3FEB2E5F3F03000000CF3BFC7F1800000000000000231DBC2B2927A427B729
      BC29B929B4222D2E2422A8222C288E22B8220000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000B2272729A12600232926A529BC2B
      2927A126302EB724AE202D288E22B82200000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000880000000A000000CF3BFC7F832E703FC32E5F3F0500
      00004F14FE7F0800000000000000231D3C280000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000088000000030000006754FB7F832E7E3FD32E5F3F020000002F09FA7F0800
      000000000000231DBC2B2927A427B729BC29B929B4222D2E3328AF27AC191217
      252C250000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000FD7F000000000000000000000000000000000000000000000000FD7F
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000E07FE07FE07F
      E07FE07FE07FE07F000000000000000000000000000000000000000000000000
      0000FD7FFD7F000000000000000000000000000000000000000000000000FD7F
      FD7F000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000E07FE07FE07FE07F
      E07FE07FE07FE07FE07FE07F0000000000000000000000000000000000000000
      FD7FFD7FFD7F000000000000000000000000000000000000000000000000FD7F
      FD7FFD7F00000000000000000000000000000000FF7F00000000000000000000
      0000000000000000FF7F000000000000000000000000E07FE07FE07FE07F0000
      007C007CE07FE07FE07FE07FE07F00000000000000000000000000000000FD7F
      FD7FFD7FFD7F000000000000000000000000000000000000000000000000FD7F
      FD7FFD7FFD7F0000000000000000000000000000FF7F00000000000000000000
      0000000000000000FF7F00000000000000000000E07FE07FE07FE07F00000000
      00000000007CE07FE07FE07FE07F0000000000000000000000000000FD7FFD7F
      FD7FFD7FFD7F000000000000000000000000000000000000000000000000FD7F
      FD7FFD7FFD7FFD7F000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000E07FE07FE07F0000E07FE07F
      E07FE07FE07F0000E07FE07FE07FE07F00000000000000000000FD7FFD7FFD7F
      FD7FFD7FFD7F000000000000000000000000000000000000000000000000FD7F
      FD7FFD7FFD7FFD7FFD7F000000000000000000000000FF7F0000000000000000
      00000000FF7F000000000000000000000000E07FE07FE07FE07FE07FE07FE07F
      E07FE07FE07FE07F0000E07FE07FE07F0000000000000000FD7FFD7FFD7FFD7F
      FD7FFD7FFD7F000000000000000000000000000000000000000000000000FD7F
      FD7FFD7FFD7FFD7FFD7FFD7F00000000000000000000FF7F0000000000000000
      00000000FF7F000000000000000000000000E07FE07FE07F0000E07FE07FE07F
      E07FE07FE07FE07FE07FE07FE07FE07F000000000000FD7FFD7FFD7FFD7FFD7F
      FD7FFD7FFD7F000000000000000000000000000000000000000000000000FD7F
      FD7FFD7FFD7FFD7FFD7FFD7F00000000000000000000FF7F0000000000000000
      00000000FF7F000000000000000000000000E07FE07FE07FE07FE07FE07FE07F
      E07FE07FE07FE07F0000E07FE07FE07F0000000000000000FD7FFD7FFD7FFD7F
      FD7FFD7FFD7F000000000000000000000000000000000000000000000000FD7F
      FD7FFD7FFD7FFD7FFD7F00000000000000000000000000000000000000000000
      000000000000000000000000000000000000E07FE07FE07FE07FE07F00000000
      E07FE07F00000000E07FE07FE07FE07F00000000000000000000FD7FFD7FFD7F
      FD7FFD7FFD7F000000000000000000000000000000000000000000000000FD7F
      FD7FFD7FFD7FFD7F00000000000000000000000000000000FF7F000000000000
      00000000FF7F0000000000000000000000000000E07FE07FE07FE07F00000000
      E07FE07F00000000E07FE07FE07FE07F000000000000000000000000FD7FFD7F
      FD7FFD7FFD7F000000000000000000000000000000000000000000000000FD7F
      FD7FFD7FFD7F0000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000E07FE07FE07FE07F00000000
      E07FE07F00000000E07FE07FE07FE07F0000000000000000000000000000FD7F
      FD7FFD7FFD7F000000000000000000000000000000000000000000000000FD7F
      FD7FFD7F00000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000E07FE07FE07FE07FE07F
      E07FE07FE07FE07FE07FE07FE07F000000000000000000000000000000000000
      FD7FFD7FFD7F000000000000000000000000000000000000000000000000FD7F
      FD7F000000000000000000000000000000000000000000000000FF7F00000000
      000000000000FF7F0000000000000000000000000000E07FE07FE07FE07FE07F
      E07FE07FE07FE07FE07FE07F0000000000000000000000000000000000000000
      0000FD7FFD7F000000000000000000000000000000000000000000000000FD7F
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000E07FE07FE07F
      E07FE07FE07FE07FE07F00000000000000000000000000000000000000000000
      00000000FD7F0000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000E07F
      E07FE07FE07F0000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000FF7F0000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      E07FE07FE07F000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      104210421042000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042004200420042
      0042004200420042004200420042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000420042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7F00000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000FF7F00000000
      000000000000FF7F00000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7F00000000000000000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000FF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F0000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7F0000FF7F000000000000000000000000000000420000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000FF7F0000
      0000000000000000FF7F0000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7F00000000000000000000000000000000000000420000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000FF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7F0000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000300000000100010000000000800100000000000000000000
      000000000000000000000000FFFFFF0000000000000000000000000000000084
      000000000000000000840084000000000000000000000000DFFFDFFF00000000
      DFFFDFFFDFFFDFFF0000DFFFDFFFDFFF00000000000000000000000000000000
      0000C0FFC0FFC0FF000000000000000000000000000000000000000000000000
      00000000000000000000000000000000FF9FF9FFFFFFFC3FFF1FF8FFFFFFE00F
      FE1FF87F07C1C007FC1FF83F07C18003F81FF81F07C18001F01FF80F01010001
      E01FF80700010000C01FF80302010000801FF80302010000C01FF80780030000
      E01FF80FC1070001F01FF81FC1070001F81FF83FE38F8001FC1FF87FE38FC003
      FE1FF8FFE38FE007FF1FF9FFFFFFF01FFFFFFFFFFFFFFFFEFFFFC001FFFFC007
      C0078031EFFDBFEBC0078031C7FF0005C0078031C3FB7E31C0078001E3F77E35
      C0078001F1E70006C0078001F8CF7FEAC0078FF1FC1F8014C0078FF1FE3FC00A
      C0078FF1FC1FE001C0078FF1F8CFE007C00F8FF1E1E7F007C01F8FF5C3F3F003
      C03F8001C7FDF803FFFFFFFFFFFFFFFF00000000000000000000000000000000
      000000000000}
  end
  object dsrcKAYIT01: TDataSource
    DataSet = tblKAYIT01
    Left = 592
    Top = 32
  end
  object tblKAYIT01: TTable
    Active = True
    BeforePost = tblKAYIT01BeforePost
    AfterPost = tblKAYIT01AfterPost
    DatabaseName = 'VIDIN'
    TableName = 'KAYIT01.db'
    Left = 624
    Top = 32
    object tblKAYIT01REFERANS: TAutoIncField
      FieldName = 'REFERANS'
      ReadOnly = True
    end
    object tblKAYIT01TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKAYIT01HANDIKAP: TFloatField
      FieldName = 'HANDIKAP'
    end
    object tblKAYIT01ATIN_ADI: TStringField
      FieldName = 'ATIN_ADI'
      Size = 50
    end
    object tblKAYIT01ORJINI: TStringField
      FieldName = 'ORJINI'
      Size = 150
    end
    object tblKAYIT01ANTRENOR: TStringField
      FieldName = 'ANTRENOR'
      Size = 50
    end
    object tblKAYIT01YASI: TFloatField
      FieldName = 'YASI'
    end
    object tblKAYIT01DERECESI: TStringField
      FieldName = 'DERECESI'
      EditMask = '#.##.##;1;_'
      Size = 35
    end
  end
  object dsrcKAYIT02: TDataSource
    DataSet = tblKAYIT02
    Left = 592
    Top = 64
  end
  object dsrcKAYIT03: TDataSource
    DataSet = tblKAYIT03
    Left = 592
    Top = 96
  end
  object dsrcKAYIT04: TDataSource
    DataSet = tblKAYIT04
    Left = 592
    Top = 128
  end
  object dsrcKAYIT05: TDataSource
    DataSet = tblKAYIT05
    Left = 592
    Top = 160
  end
  object dsrcKAYIT06: TDataSource
    DataSet = tblKAYIT06
    Left = 656
    Top = 32
  end
  object dsrcKAYIT07: TDataSource
    DataSet = tblKAYIT07
    Left = 656
    Top = 64
  end
  object dsrcKAYIT08: TDataSource
    DataSet = tblKAYIT08
    Left = 656
    Top = 96
  end
  object dsrcKAYIT09: TDataSource
    DataSet = tblKAYIT09
    Left = 656
    Top = 128
  end
  object tblKAYIT02: TTable
    Active = True
    BeforePost = tblKAYIT02BeforePost
    AfterPost = tblKAYIT02AfterPost
    DatabaseName = 'VIDIN'
    TableName = 'KAYIT02.db'
    Left = 624
    Top = 64
    object tblKAYIT02REFERANS: TAutoIncField
      FieldName = 'REFERANS'
      ReadOnly = True
    end
    object tblKAYIT02TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKAYIT02HANDIKAP: TFloatField
      FieldName = 'HANDIKAP'
    end
    object tblKAYIT02ATIN_ADI: TStringField
      FieldName = 'ATIN_ADI'
      Size = 50
    end
    object tblKAYIT02ORJINI: TStringField
      FieldName = 'ORJINI'
      Size = 150
    end
    object tblKAYIT02ANTRENOR: TStringField
      FieldName = 'ANTRENOR'
      Size = 50
    end
    object tblKAYIT02YASI: TFloatField
      FieldName = 'YASI'
    end
    object tblKAYIT02DERECESI: TStringField
      FieldName = 'DERECESI'
      EditMask = '#.##.##;1;_'
      Size = 35
    end
  end
  object tblKAYIT03: TTable
    Active = True
    BeforePost = tblKAYIT03BeforePost
    AfterPost = tblKAYIT03AfterPost
    DatabaseName = 'VIDIN'
    TableName = 'KAYIT03.db'
    Left = 624
    Top = 96
    object tblKAYIT03REFERANS: TAutoIncField
      FieldName = 'REFERANS'
      ReadOnly = True
    end
    object tblKAYIT03TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKAYIT03HANDIKAP: TFloatField
      FieldName = 'HANDIKAP'
    end
    object tblKAYIT03ATIN_ADI: TStringField
      FieldName = 'ATIN_ADI'
      Size = 50
    end
    object tblKAYIT03ORJINI: TStringField
      FieldName = 'ORJINI'
      Size = 150
    end
    object tblKAYIT03ANTRENOR: TStringField
      FieldName = 'ANTRENOR'
      Size = 50
    end
    object tblKAYIT03YASI: TFloatField
      FieldName = 'YASI'
    end
    object tblKAYIT03DERECESI: TStringField
      FieldName = 'DERECESI'
      EditMask = '#.##.##;1;_'
      Size = 35
    end
  end
  object tblKAYIT04: TTable
    Active = True
    BeforePost = tblKAYIT04BeforePost
    AfterPost = tblKAYIT04AfterPost
    DatabaseName = 'VIDIN'
    TableName = 'KAYIT04.db'
    Left = 624
    Top = 128
    object tblKAYIT04REFERANS: TAutoIncField
      FieldName = 'REFERANS'
      ReadOnly = True
    end
    object tblKAYIT04TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKAYIT04HANDIKAP: TFloatField
      FieldName = 'HANDIKAP'
    end
    object tblKAYIT04ATIN_ADI: TStringField
      FieldName = 'ATIN_ADI'
      Size = 50
    end
    object tblKAYIT04ORJINI: TStringField
      FieldName = 'ORJINI'
      Size = 150
    end
    object tblKAYIT04ANTRENOR: TStringField
      FieldName = 'ANTRENOR'
      Size = 50
    end
    object tblKAYIT04YASI: TFloatField
      FieldName = 'YASI'
    end
    object tblKAYIT04DERECESI: TStringField
      FieldName = 'DERECESI'
      EditMask = '#.##.##;1;_'
      Size = 35
    end
  end
  object tblKAYIT05: TTable
    Active = True
    BeforePost = tblKAYIT05BeforePost
    AfterPost = tblKAYIT05AfterPost
    DatabaseName = 'VIDIN'
    TableName = 'KAYIT05.db'
    Left = 624
    Top = 160
    object tblKAYIT05REFERANS: TAutoIncField
      FieldName = 'REFERANS'
      ReadOnly = True
    end
    object tblKAYIT05TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKAYIT05HANDIKAP: TFloatField
      FieldName = 'HANDIKAP'
    end
    object tblKAYIT05ATIN_ADI: TStringField
      FieldName = 'ATIN_ADI'
      Size = 50
    end
    object tblKAYIT05ORJINI: TStringField
      FieldName = 'ORJINI'
      Size = 150
    end
    object tblKAYIT05ANTRENOR: TStringField
      FieldName = 'ANTRENOR'
      Size = 50
    end
    object tblKAYIT05YASI: TFloatField
      FieldName = 'YASI'
    end
    object tblKAYIT05DERECESI: TStringField
      FieldName = 'DERECESI'
      EditMask = '#.##.##;1;_'
      Size = 35
    end
  end
  object tblKAYIT06: TTable
    Active = True
    BeforePost = tblKAYIT06BeforePost
    AfterPost = tblKAYIT06AfterPost
    DatabaseName = 'VIDIN'
    TableName = 'KAYIT06.db'
    Left = 688
    Top = 32
    object tblKAYIT06REFERANS: TAutoIncField
      FieldName = 'REFERANS'
      ReadOnly = True
    end
    object tblKAYIT06TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKAYIT06HANDIKAP: TFloatField
      FieldName = 'HANDIKAP'
    end
    object tblKAYIT06ATIN_ADI: TStringField
      FieldName = 'ATIN_ADI'
      Size = 50
    end
    object tblKAYIT06ORJINI: TStringField
      FieldName = 'ORJINI'
      Size = 150
    end
    object tblKAYIT06ANTRENOR: TStringField
      FieldName = 'ANTRENOR'
      Size = 50
    end
    object tblKAYIT06YASI: TFloatField
      FieldName = 'YASI'
    end
    object tblKAYIT06DERECESI: TStringField
      FieldName = 'DERECESI'
      EditMask = '#.##.##;1;_'
      Size = 35
    end
  end
  object tblKAYIT07: TTable
    Active = True
    BeforePost = tblKAYIT07BeforePost
    AfterPost = tblKAYIT07AfterPost
    DatabaseName = 'VIDIN'
    TableName = 'KAYIT07.db'
    Left = 688
    Top = 64
    object tblKAYIT07REFERANS: TAutoIncField
      FieldName = 'REFERANS'
      ReadOnly = True
    end
    object tblKAYIT07TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKAYIT07HANDIKAP: TFloatField
      FieldName = 'HANDIKAP'
    end
    object tblKAYIT07ATIN_ADI: TStringField
      FieldName = 'ATIN_ADI'
      Size = 50
    end
    object tblKAYIT07ORJINI: TStringField
      FieldName = 'ORJINI'
      Size = 150
    end
    object tblKAYIT07ANTRENOR: TStringField
      FieldName = 'ANTRENOR'
      Size = 50
    end
    object tblKAYIT07YASI: TFloatField
      FieldName = 'YASI'
    end
    object tblKAYIT07DERECESI: TStringField
      FieldName = 'DERECESI'
      EditMask = '#.##.##;1;_'
      Size = 35
    end
  end
  object tblKAYIT08: TTable
    Active = True
    BeforePost = tblKAYIT08BeforePost
    AfterPost = tblKAYIT08AfterPost
    DatabaseName = 'VIDIN'
    TableName = 'KAYIT08.db'
    Left = 688
    Top = 96
    object tblKAYIT08REFERANS: TAutoIncField
      FieldName = 'REFERANS'
      ReadOnly = True
    end
    object tblKAYIT08TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKAYIT08HANDIKAP: TFloatField
      FieldName = 'HANDIKAP'
    end
    object tblKAYIT08ATIN_ADI: TStringField
      FieldName = 'ATIN_ADI'
      Size = 50
    end
    object tblKAYIT08ORJINI: TStringField
      FieldName = 'ORJINI'
      Size = 150
    end
    object tblKAYIT08ANTRENOR: TStringField
      FieldName = 'ANTRENOR'
      Size = 50
    end
    object tblKAYIT08YASI: TFloatField
      FieldName = 'YASI'
    end
    object tblKAYIT08DERECESI: TStringField
      FieldName = 'DERECESI'
      EditMask = '#.##.##;1;_'
      Size = 35
    end
  end
  object tblKAYIT09: TTable
    Active = True
    BeforePost = tblKAYIT09BeforePost
    AfterPost = tblKAYIT09AfterPost
    DatabaseName = 'VIDIN'
    TableName = 'KAYIT09.db'
    Left = 688
    Top = 128
    object tblKAYIT09REFERANS: TAutoIncField
      FieldName = 'REFERANS'
      ReadOnly = True
    end
    object tblKAYIT09TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKAYIT09HANDIKAP: TFloatField
      FieldName = 'HANDIKAP'
    end
    object tblKAYIT09ATIN_ADI: TStringField
      FieldName = 'ATIN_ADI'
      Size = 50
    end
    object tblKAYIT09ORJINI: TStringField
      FieldName = 'ORJINI'
      Size = 150
    end
    object tblKAYIT09ANTRENOR: TStringField
      FieldName = 'ANTRENOR'
      Size = 50
    end
    object tblKAYIT09YASI: TFloatField
      FieldName = 'YASI'
    end
    object tblKAYIT09DERECESI: TStringField
      FieldName = 'DERECESI'
      EditMask = '#.##.##;1;_'
      Size = 35
    end
  end
  object dsrcKAYIT10: TDataSource
    DataSet = tblKAYIT10
    Left = 656
    Top = 160
  end
  object tblKAYIT10: TTable
    Active = True
    BeforePost = tblKAYIT10BeforePost
    AfterPost = tblKAYIT10AfterPost
    DatabaseName = 'VIDIN'
    TableName = 'KAYIT10.db'
    Left = 688
    Top = 160
    object tblKAYIT10REFERANS: TAutoIncField
      FieldName = 'REFERANS'
      ReadOnly = True
    end
    object tblKAYIT10TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKAYIT10HANDIKAP: TFloatField
      FieldName = 'HANDIKAP'
    end
    object tblKAYIT10ATIN_ADI: TStringField
      FieldName = 'ATIN_ADI'
      Size = 50
    end
    object tblKAYIT10ORJINI: TStringField
      FieldName = 'ORJINI'
      Size = 150
    end
    object tblKAYIT10ANTRENOR: TStringField
      FieldName = 'ANTRENOR'
      Size = 50
    end
    object tblKAYIT10YASI: TFloatField
      FieldName = 'YASI'
    end
    object tblKAYIT10DERECESI: TStringField
      FieldName = 'DERECESI'
      EditMask = '#.##.##;1;_'
      Size = 35
    end
  end
  object dsrcACIKLAMA: TDataSource
    DataSet = tblACIKLAMA
    Left = 656
    Top = 192
  end
  object tblACIKLAMA: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'ACIKLAMA.db'
    Left = 688
    Top = 192
    object tblACIKLAMATARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblACIKLAMAKOSU01: TStringField
      FieldName = 'KOSU01'
      Size = 255
    end
    object tblACIKLAMAKOSU02: TStringField
      FieldName = 'KOSU02'
      Size = 255
    end
    object tblACIKLAMAKOSU03: TStringField
      FieldName = 'KOSU03'
      Size = 255
    end
    object tblACIKLAMAKOSU04: TStringField
      FieldName = 'KOSU04'
      Size = 255
    end
    object tblACIKLAMAKOSU05: TStringField
      FieldName = 'KOSU05'
      Size = 255
    end
    object tblACIKLAMAKOSU06: TStringField
      FieldName = 'KOSU06'
      Size = 255
    end
    object tblACIKLAMAKOSU07: TStringField
      FieldName = 'KOSU07'
      Size = 255
    end
    object tblACIKLAMAKOSU08: TStringField
      FieldName = 'KOSU08'
      Size = 255
    end
    object tblACIKLAMAKOSU09: TStringField
      FieldName = 'KOSU09'
      Size = 255
    end
    object tblACIKLAMAKOSU10: TStringField
      FieldName = 'KOSU10'
      Size = 255
    end
    object tblACIKLAMATUR01: TStringField
      FieldName = 'TUR01'
      Size = 25
    end
    object tblACIKLAMATUR02: TStringField
      FieldName = 'TUR02'
      Size = 25
    end
    object tblACIKLAMATUR03: TStringField
      FieldName = 'TUR03'
      Size = 25
    end
    object tblACIKLAMATUR04: TStringField
      FieldName = 'TUR04'
      Size = 25
    end
    object tblACIKLAMATUR05: TStringField
      FieldName = 'TUR05'
      Size = 25
    end
    object tblACIKLAMATUR06: TStringField
      FieldName = 'TUR06'
      Size = 25
    end
    object tblACIKLAMATUR07: TStringField
      FieldName = 'TUR07'
      Size = 25
    end
    object tblACIKLAMATUR08: TStringField
      FieldName = 'TUR08'
      Size = 25
    end
    object tblACIKLAMATUR09: TStringField
      FieldName = 'TUR09'
      Size = 25
    end
    object tblACIKLAMATUR10: TStringField
      FieldName = 'TUR10'
      Size = 25
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 592
    Top = 192
    object Ekle1: TMenuItem
      Bitmap.Data = {
        E61D0000424DE61D000000000000360000002800000032000000320000000100
        180000000000B01D0000C40E0000C40E00000000000000000000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000000000
        00000000000000000000000000000000000000000000000000000000FFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF00000000000000000000000000
        0000000000000000000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFF00000000000000FF0000FF0000FF0000FF0000FF00
        00FF0000FF00000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFF00000000000000FF0000FF0000FF0000FF0000FF0000FF0000FF000000
        00000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000000000
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF00000000000000FF0000FF0000
        FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFF00000000000000FF0000FF0000FF0000FF0000FF00
        00FF0000FF00000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFF00000000000000FF0000FF0000FF0000FF0000FF0000FF0000FF000000
        00000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000000000
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF00000000000000FF0000FF0000
        FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFF00000000000000FF0000FF0000FF0000FF0000FF00
        00FF0000FF00000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFF00000000000000FF0000FF0000FF0000FF0000FF0000FF0000FF000000
        00000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000000000
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF00000000000000FF0000FF0000
        FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFF00000000000000FF0000FF0000FF0000FF0000FF00
        00FF0000FF00000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFF00000000000000FF0000FF0000FF0000FF0000FF0000FF0000FF000000
        00000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000000000
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000FF0000FF0000
        FF0000FF0000FF0000FF0000FF00000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000000000FFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF0000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000000000000000000000000000FF0000FF0000FF0000FF0000FF00
        00FF0000FF000000000000000000000000000000000000000000000000000000
        00000000000000000000000000000000000000000000000000000000000000FF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFF00000000000000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFF00000000000000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF00000000000000FFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        00000000000000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        00000000000000FFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF00000000000000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00000000000000FF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFF00000000000000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFF00000000000000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF00000000000000FFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        00000000000000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        00000000000000FFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF0000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000000000000000000000000000FF0000FF0000FF0000FF0000FF00
        00FF0000FF000000000000000000000000000000000000000000000000000000
        00000000000000000000000000000000000000000000000000000000000000FF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFF00000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000000000000000FF0000FF0000FF0000FF0000FF0000FF0000FF000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000FFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000000000
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF00000000000000FF0000FF0000
        FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFF00000000000000FF0000FF0000FF0000FF0000FF00
        00FF0000FF00000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFF00000000000000FF0000FF0000FF0000FF0000FF0000FF0000FF000000
        00000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000000000
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF00000000000000FF0000FF0000
        FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFF00000000000000FF0000FF0000FF0000FF0000FF00
        00FF0000FF00000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFF00000000000000FF0000FF0000FF0000FF0000FF0000FF0000FF000000
        00000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000000000
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF00000000000000FF0000FF0000
        FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFF00000000000000FF0000FF0000FF0000FF0000FF00
        00FF0000FF00000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFF00000000000000FF0000FF0000FF0000FF0000FF0000FF0000FF000000
        00000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000000000
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF00000000000000FF0000FF0000
        FF0000FF0000FF0000FF0000FF00000000000000FFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFF00000000000000FF0000FF0000FF0000FF0000FF00
        00FF0000FF00000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFF0000000000000000000000000000000000000000000000000000000000
        00000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000000000
        00000000000000000000000000000000000000000000000000000000FFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000}
      Caption = '  Ekle'
      OnClick = Ekle1Click
    end
    object Sil1: TMenuItem
      Bitmap.Data = {
        E61D0000424DE61D000000000000360000002800000032000000320000000100
        180000000000B01D0000C40E0000C40E00000000000000000000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFF0000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000FFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFF0000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000000000000000000000000000000000000000000000000000FFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFF0000000000000000FF0000FF00
        00FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF0000FF0000FF000000000000FFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFF0000000000000000FF0000FF0000FF0000FF0000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        0000FF0000FF000000000000FFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFF0000000000000000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        00000000FFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFF0000000000
        000000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF000000000000FFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFF0000000000000000FF0000FF00
        00FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF0000FF0000FF000000000000FFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFF0000000000000000FF0000FF0000FF0000FF0000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        0000FF0000FF000000000000FFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFF0000000000000000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        00000000FFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFF0000000000
        000000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF00
        00FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF
        0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF0000
        FF0000FF0000FF0000FF0000FF0000FF0000FF0000FF000000000000FFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFF00000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFF000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFF0000}
      Caption = '  Sil'
      OnClick = Sil1Click
    end
    object Ara1: TMenuItem
      Bitmap.Data = {
        F6000000424DF600000000000000760000002800000010000000100000000100
        0400000000008000000000000000000000001000000000000000000000000000
        8000008000000080800080000000800080008080000080808000C0C0C0000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00888888888888
        8888888888888888888800000888880000080F000888880F00080F000888880F
        0008000000080000000800F000000F00000800F000800F00000800F000800F00
        00088000000000000088880F00080F0008888800000800000888888000888000
        88888880F08880F0888888800088800088888888888888888888}
      Caption = '  Ara'
      ShortCut = 16469
      OnClick = Ara1Click
    end
  end
  object querySIL: TQuery
    Active = True
    DatabaseName = 'VIDIN'
    SQL.Strings = (
      'SELECT * FROM TAHMIN')
    Left = 592
    Top = 224
  end
  object queryATLISTESI: TQuery
    Active = True
    CachedUpdates = True
    AutoRefresh = True
    DatabaseName = 'VIDIN'
    Constrained = True
    SQL.Strings = (
      'SELECT * FROM ATLAR'
      'WHERE (ATIN_ADI LIKE :ADI AND CINSI LIKE :CINSI)')
    Left = 624
    Top = 224
    ParamData = <
      item
        DataType = ftString
        Name = 'ADI'
        ParamType = ptUnknown
      end
      item
        DataType = ftString
        Name = 'CINSI'
        ParamType = ptUnknown
      end>
    object queryATLISTESIATIN_ADI: TStringField
      FieldName = 'ATIN_ADI'
      Origin = 'VIDIN."ATLAR.DB".ATIN_ADI'
      Size = 35
    end
    object queryATLISTESICINSI: TStringField
      FieldName = 'CINSI'
      Origin = 'VIDIN."ATLAR.DB".CINSI'
      Size = 35
    end
    object queryATLISTESIBABASI: TStringField
      FieldName = 'BABASI'
      Origin = 'VIDIN."ATLAR.DB".BABASI'
      Size = 35
    end
    object queryATLISTESIANASI: TStringField
      FieldName = 'ANASI'
      Origin = 'VIDIN."ATLAR.DB".ANASI'
      Size = 35
    end
    object queryATLISTESIHANDIKAP: TFloatField
      FieldName = 'HANDIKAP'
      Origin = 'VIDIN."ATLAR.DB".HANDIKAP'
    end
    object queryATLISTESIDOGUMTAR: TFloatField
      FieldName = 'DOGUMTAR'
      Origin = 'VIDIN."ATLAR.DB".DOGUMTAR'
    end
    object queryATLISTESISAHIBI: TStringField
      FieldName = 'SAHIBI'
      Origin = 'VIDIN."ATLAR.DB".SAHIBI'
      Size = 50
    end
    object queryATLISTESIANTRENOR: TStringField
      FieldName = 'ANTRENOR'
      Origin = 'VIDIN."ATLAR.DB".ANTRENOR'
      Size = 35
    end
    object queryATLISTESIREFERANSNO: TIntegerField
      FieldName = 'REFERANSNO'
      Origin = 'VIDIN."ATLAR.DB".REFERANSNO'
    end
  end
  object SaveDialog1: TSaveDialog
    FileName = 'KAYIT'
    Filter = 'Macintosh Metin Belgesi|*.TXT'
    Left = 656
    Top = 224
  end
  object tblAT: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'ATLAR.db'
    Left = 688
    Top = 224
    object tblATATIN_ADI: TStringField
      FieldName = 'ATIN_ADI'
      Size = 35
    end
    object tblATCINSI: TStringField
      FieldName = 'CINSI'
      Size = 35
    end
    object tblATBABASI: TStringField
      FieldName = 'BABASI'
      Size = 35
    end
    object tblATANASI: TStringField
      FieldName = 'ANASI'
      Size = 35
    end
    object tblATHANDIKAP: TFloatField
      FieldName = 'HANDIKAP'
    end
    object tblATDOGUMTAR: TFloatField
      FieldName = 'DOGUMTAR'
    end
    object tblATSAHIBI: TStringField
      FieldName = 'SAHIBI'
      Size = 50
    end
    object tblATANTRENOR: TStringField
      FieldName = 'ANTRENOR'
      Size = 35
    end
    object tblATREFERANSNO: TAutoIncField
      FieldName = 'REFERANSNO'
      ReadOnly = True
    end
  end
end
