object frmGazeteler: TfrmGazeteler
  Left = 51
  Top = 103
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsDialog
  Caption = 'Gazete Yarýþmasý'
  ClientHeight = 366
  ClientWidth = 658
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Bevel1: TBevel
    Left = 0
    Top = 27
    Width = 817
    Height = 382
  end
  object PageControl1: TPageControl
    Left = 0
    Top = 32
    Width = 657
    Height = 333
    ActivePage = TabSheet1
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = 'Tahminler'
      object DBGrid1: TDBGrid
        Left = 0
        Top = 0
        Width = 649
        Height = 305
        DataSource = dsrcTAHMIN
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = []
        OnCellClick = DBGrid1CellClick
        OnKeyPress = DBGrid1KeyPress
        Columns = <
          item
            Alignment = taRightJustify
            Color = cl3DLight
            Expanded = False
            FieldName = 'GAZETELER'
            ReadOnly = True
            Title.Alignment = taCenter
            Title.Caption = 'Gazeteler'
            Width = 101
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'KOSU01'
            Title.Alignment = taCenter
            Title.Caption = '01. Koþu'
            Width = 50
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'KOSU02'
            Title.Alignment = taCenter
            Title.Caption = '02. Koþu'
            Width = 50
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'KOSU03'
            Title.Alignment = taCenter
            Title.Caption = '03. Koþu'
            Width = 50
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'KOSU04'
            Title.Alignment = taCenter
            Title.Caption = '04. Koþu'
            Width = 50
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'KOSU05'
            Title.Alignment = taCenter
            Title.Caption = '05. Koþu'
            Width = 50
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'KOSU06'
            Title.Alignment = taCenter
            Title.Caption = '06. Koþu'
            Width = 50
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'KOSU07'
            Title.Alignment = taCenter
            Title.Caption = '07. Koþu'
            Width = 50
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'KOSU08'
            Title.Alignment = taCenter
            Title.Caption = '08. Koþu'
            Width = 50
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'KOSU09'
            Title.Alignment = taCenter
            Title.Caption = '09. Koþu'
            Width = 50
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'KOSU10'
            Title.Alignment = taCenter
            Title.Caption = '10. Koþu'
            Width = 50
            Visible = True
          end>
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Ganyan'
      ImageIndex = 1
      object DBGrid2: TDBGrid
        Left = 0
        Top = 0
        Width = 649
        Height = 305
        DataSource = dsrcGANYAN
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = []
        OnCellClick = DBGrid2CellClick
        OnKeyPress = DBGrid2KeyPress
        Columns = <
          item
            Alignment = taRightJustify
            Color = cl3DLight
            Expanded = False
            FieldName = 'GAZETE'
            ReadOnly = True
            Title.Alignment = taCenter
            Title.Caption = 'Gazeteler'
            Width = 155
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'AYAK01'
            Title.Alignment = taCenter
            Title.Caption = '01. Ayak'
            Width = 75
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'AYAK02'
            Title.Alignment = taCenter
            Title.Caption = '02. Ayak'
            Width = 75
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'AYAK03'
            Title.Alignment = taCenter
            Title.Caption = '03. Ayak'
            Width = 75
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'AYAK04'
            Title.Alignment = taCenter
            Title.Caption = '04. Ayak'
            Width = 75
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'AYAK05'
            Title.Alignment = taCenter
            Title.Caption = '05. Ayak'
            Width = 75
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'AYAK06'
            Title.Alignment = taCenter
            Title.Caption = '06. Ayak'
            Width = 75
            Visible = True
          end>
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'Ýkili ve Çifte'
      ImageIndex = 2
      object DBGrid3: TDBGrid
        Left = 0
        Top = 0
        Width = 649
        Height = 305
        DataSource = dsrcIKILI
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = []
        OnCellClick = DBGrid3CellClick
        OnKeyPress = DBGrid3KeyPress
        Columns = <
          item
            Alignment = taRightJustify
            Color = cl3DLight
            Expanded = False
            FieldName = 'GAZETE'
            ReadOnly = True
            Title.Alignment = taCenter
            Title.Caption = 'Gazeteler'
            Width = 170
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'IKILIKOSU'
            Title.Alignment = taCenter
            Title.Caption = 'Ýkili Koþusu'
            Width = 110
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'IKILITAHMIN'
            Title.Alignment = taCenter
            Title.Caption = 'Ýkili Tahmini'
            Width = 110
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'CIFTEKOSU'
            Title.Alignment = taCenter
            Title.Caption = 'Çifte Koþusu'
            Width = 110
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'CIFTETAHMIN'
            Title.Alignment = taCenter
            Title.Caption = 'Çifte Tahmini'
            Width = 110
            Visible = True
          end>
      end
    end
    object TabSheet4: TTabSheet
      Caption = 'Yarýþ Bilgileri'
      ImageIndex = 3
      object GroupBox1: TGroupBox
        Left = 0
        Top = 0
        Width = 649
        Height = 305
        Caption = ' Koþular '
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clActiveCaption
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        TabOrder = 0
        object PageControl2: TPageControl
          Left = 8
          Top = 16
          Width = 417
          Height = 281
          ActivePage = TabSheet6
          Style = tsButtons
          TabOrder = 0
          object TabSheet6: TTabSheet
            Caption = '1. Koþu'
            object Label1: TLabel
              Left = 72
              Top = 32
              Width = 73
              Height = 13
              Caption = 'Koþan At Adedi'
            end
            object Label2: TLabel
              Left = 97
              Top = 56
              Width = 48
              Height = 13
              Caption = 'Eküri Atlar'
            end
            object Label3: TLabel
              Left = 117
              Top = 80
              Width = 28
              Height = 13
              Caption = 'Birinci'
            end
            object Label4: TLabel
              Left = 120
              Top = 104
              Width = 25
              Height = 13
              Caption = 'Ýkinci'
            end
            object Label5: TLabel
              Left = 107
              Top = 128
              Width = 38
              Height = 13
              Caption = 'Üçüncü'
            end
            object Label6: TLabel
              Left = 98
              Top = 152
              Width = 47
              Height = 13
              Caption = 'Dördüncü'
            end
            object Label68: TLabel
              Left = 94
              Top = 176
              Width = 51
              Height = 13
              Caption = 'Çýkan Atlar'
            end
            object Label69: TLabel
              Left = 115
              Top = 200
              Width = 30
              Height = 13
              Caption = 'E.F.G.'
            end
            object DBCheckBox1: TDBCheckBox
              Left = 256
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Üçlü Bahis'
              DataField = 'UCLU_BAHIS'
              DataSource = dsrcKOSU01
              TabOrder = 0
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox1Click
            end
            object DBCheckBox2: TDBCheckBox
              Left = 160
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Ýkili Bahis'
              DataField = 'IKILI_BAHIS'
              DataSource = dsrcKOSU01
              TabOrder = 1
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox2Click
            end
            object DBEdit1: TDBEdit
              Left = 160
              Top = 32
              Width = 73
              Height = 21
              DataField = 'KOSAN_AT_ADEDI'
              DataSource = dsrcKOSU01
              TabOrder = 2
              OnChange = DBEdit1Change
              OnKeyPress = DBEdit1KeyPress
            end
            object DBEdit2: TDBEdit
              Left = 160
              Top = 56
              Width = 169
              Height = 21
              DataField = 'EKURI_AT'
              DataSource = dsrcKOSU01
              TabOrder = 3
              OnChange = DBEdit2Change
              OnKeyPress = DBEdit2KeyPress
            end
            object DBEdit3: TDBEdit
              Left = 160
              Top = 80
              Width = 169
              Height = 21
              DataField = 'BIRINCI'
              DataSource = dsrcKOSU01
              TabOrder = 4
              OnChange = DBEdit3Change
              OnKeyPress = DBEdit3KeyPress
            end
            object DBEdit4: TDBEdit
              Left = 160
              Top = 104
              Width = 169
              Height = 21
              DataField = 'IKINCI'
              DataSource = dsrcKOSU01
              TabOrder = 5
              OnChange = DBEdit4Change
              OnKeyPress = DBEdit4KeyPress
            end
            object DBEdit5: TDBEdit
              Left = 160
              Top = 128
              Width = 169
              Height = 21
              DataField = 'UCUNCU'
              DataSource = dsrcKOSU01
              TabOrder = 6
              OnChange = DBEdit5Change
              OnKeyPress = DBEdit5KeyPress
            end
            object DBEdit6: TDBEdit
              Left = 160
              Top = 152
              Width = 169
              Height = 21
              DataField = 'DORDUNCU'
              DataSource = dsrcKOSU01
              TabOrder = 7
              OnChange = DBEdit6Change
              OnKeyPress = DBEdit6KeyPress
            end
            object StaticText2: TStaticText
              Left = 64
              Top = 8
              Width = 273
              Height = 17
              Alignment = taCenter
              AutoSize = False
              BorderStyle = sbsSingle
              Caption = '1. Koþu'
              Color = clNavy
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWhite
              Font.Height = -11
              Font.Name = 'MS Sans Serif'
              Font.Style = []
              ParentColor = False
              ParentFont = False
              TabOrder = 8
            end
            object DBEdit61: TDBEdit
              Left = 160
              Top = 176
              Width = 169
              Height = 21
              DataField = 'CIKAN_ATLAR'
              DataSource = dsrcKOSU01
              TabOrder = 9
              OnChange = DBEdit61Change
              OnKeyPress = DBEdit61KeyPress
            end
            object DBEdit62: TDBEdit
              Left = 160
              Top = 200
              Width = 169
              Height = 21
              DataField = 'EFG'
              DataSource = dsrcKOSU01
              TabOrder = 10
              OnChange = DBEdit62Change
              OnKeyPress = DBEdit62KeyPress
            end
          end
          object TabSheet7: TTabSheet
            Caption = '2. Koþu'
            ImageIndex = 1
            object Label7: TLabel
              Left = 72
              Top = 32
              Width = 73
              Height = 13
              Caption = 'Koþan At Adedi'
            end
            object Label8: TLabel
              Left = 97
              Top = 56
              Width = 48
              Height = 13
              Caption = 'Eküri Atlar'
            end
            object Label9: TLabel
              Left = 117
              Top = 80
              Width = 28
              Height = 13
              Caption = 'Birinci'
            end
            object Label10: TLabel
              Left = 120
              Top = 104
              Width = 25
              Height = 13
              Caption = 'Ýkinci'
            end
            object Label11: TLabel
              Left = 107
              Top = 128
              Width = 38
              Height = 13
              Caption = 'Üçüncü'
            end
            object Label12: TLabel
              Left = 98
              Top = 152
              Width = 47
              Height = 13
              Caption = 'Dördüncü'
            end
            object Label70: TLabel
              Left = 94
              Top = 176
              Width = 51
              Height = 13
              Caption = 'Çýkan Atlar'
            end
            object Label71: TLabel
              Left = 115
              Top = 200
              Width = 30
              Height = 13
              Caption = 'E.F.G.'
            end
            object DBCheckBox3: TDBCheckBox
              Left = 256
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Üçlü Bahis'
              DataField = 'UCLU_BAHIS'
              DataSource = dsrcKOSU02
              TabOrder = 0
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox3Click
            end
            object DBCheckBox4: TDBCheckBox
              Left = 160
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Ýkili Bahis'
              DataField = 'IKILI_BAHIS'
              DataSource = dsrcKOSU02
              TabOrder = 1
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox4Click
            end
            object DBEdit7: TDBEdit
              Left = 160
              Top = 32
              Width = 73
              Height = 21
              DataField = 'KOSAN_AT_ADEDI'
              DataSource = dsrcKOSU02
              TabOrder = 2
              OnChange = DBEdit7Change
              OnKeyPress = DBEdit7KeyPress
            end
            object DBEdit8: TDBEdit
              Left = 160
              Top = 56
              Width = 169
              Height = 21
              DataField = 'EKURI_AT'
              DataSource = dsrcKOSU02
              TabOrder = 3
              OnChange = DBEdit8Change
              OnKeyPress = DBEdit8KeyPress
            end
            object DBEdit9: TDBEdit
              Left = 160
              Top = 80
              Width = 169
              Height = 21
              DataField = 'BIRINCI'
              DataSource = dsrcKOSU02
              TabOrder = 4
              OnChange = DBEdit9Change
              OnKeyPress = DBEdit9KeyPress
            end
            object DBEdit10: TDBEdit
              Left = 160
              Top = 104
              Width = 169
              Height = 21
              DataField = 'IKINCI'
              DataSource = dsrcKOSU02
              TabOrder = 5
              OnChange = DBEdit10Change
              OnKeyPress = DBEdit10KeyPress
            end
            object DBEdit11: TDBEdit
              Left = 160
              Top = 128
              Width = 169
              Height = 21
              DataField = 'UCUNCU'
              DataSource = dsrcKOSU02
              TabOrder = 6
              OnChange = DBEdit11Change
              OnKeyPress = DBEdit11KeyPress
            end
            object DBEdit12: TDBEdit
              Left = 160
              Top = 152
              Width = 169
              Height = 21
              DataField = 'DORDUNCU'
              DataSource = dsrcKOSU02
              TabOrder = 7
              OnChange = DBEdit12Change
              OnKeyPress = DBEdit12KeyPress
            end
            object StaticText3: TStaticText
              Left = 64
              Top = 8
              Width = 273
              Height = 17
              Alignment = taCenter
              AutoSize = False
              BorderStyle = sbsSingle
              Caption = '2. Koþu'
              Color = clNavy
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWhite
              Font.Height = -11
              Font.Name = 'MS Sans Serif'
              Font.Style = []
              ParentColor = False
              ParentFont = False
              TabOrder = 8
            end
            object DBEdit63: TDBEdit
              Left = 160
              Top = 176
              Width = 169
              Height = 21
              DataField = 'CIKAN_ATLAR'
              DataSource = dsrcKOSU02
              TabOrder = 9
              OnChange = DBEdit63Change
              OnKeyPress = DBEdit63KeyPress
            end
            object DBEdit64: TDBEdit
              Left = 160
              Top = 200
              Width = 169
              Height = 21
              DataField = 'EFG'
              DataSource = dsrcKOSU02
              TabOrder = 10
              OnChange = DBEdit64Change
              OnKeyPress = DBEdit64KeyPress
            end
          end
          object TabSheet8: TTabSheet
            Caption = '3. Koþu'
            ImageIndex = 2
            object Label13: TLabel
              Left = 72
              Top = 32
              Width = 73
              Height = 13
              Caption = 'Koþan At Adedi'
            end
            object Label14: TLabel
              Left = 97
              Top = 56
              Width = 48
              Height = 13
              Caption = 'Eküri Atlar'
            end
            object Label15: TLabel
              Left = 117
              Top = 80
              Width = 28
              Height = 13
              Caption = 'Birinci'
            end
            object Label16: TLabel
              Left = 120
              Top = 104
              Width = 25
              Height = 13
              Caption = 'Ýkinci'
            end
            object Label17: TLabel
              Left = 107
              Top = 128
              Width = 38
              Height = 13
              Caption = 'Üçüncü'
            end
            object Label18: TLabel
              Left = 98
              Top = 152
              Width = 47
              Height = 13
              Caption = 'Dördüncü'
            end
            object Label72: TLabel
              Left = 94
              Top = 176
              Width = 51
              Height = 13
              Caption = 'Çýkan Atlar'
            end
            object Label73: TLabel
              Left = 115
              Top = 200
              Width = 30
              Height = 13
              Caption = 'E.F.G.'
            end
            object DBCheckBox5: TDBCheckBox
              Left = 256
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Üçlü Bahis'
              DataField = 'UCLU_BAHIS'
              DataSource = dsrcKOSU03
              TabOrder = 0
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox5Click
            end
            object DBCheckBox6: TDBCheckBox
              Left = 160
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Ýkili Bahis'
              DataField = 'IKILI_BAHIS'
              DataSource = dsrcKOSU03
              TabOrder = 1
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox6Click
            end
            object DBEdit13: TDBEdit
              Left = 160
              Top = 32
              Width = 73
              Height = 21
              DataField = 'KOSAN_AT_ADEDI'
              DataSource = dsrcKOSU03
              TabOrder = 2
              OnChange = DBEdit13Change
              OnKeyPress = DBEdit13KeyPress
            end
            object DBEdit14: TDBEdit
              Left = 160
              Top = 56
              Width = 169
              Height = 21
              DataField = 'EKURI_AT'
              DataSource = dsrcKOSU03
              TabOrder = 3
              OnChange = DBEdit14Change
              OnKeyPress = DBEdit14KeyPress
            end
            object DBEdit15: TDBEdit
              Left = 160
              Top = 80
              Width = 169
              Height = 21
              DataField = 'BIRINCI'
              DataSource = dsrcKOSU03
              TabOrder = 4
              OnChange = DBEdit15Change
              OnKeyPress = DBEdit15KeyPress
            end
            object DBEdit16: TDBEdit
              Left = 160
              Top = 104
              Width = 169
              Height = 21
              DataField = 'IKINCI'
              DataSource = dsrcKOSU03
              TabOrder = 5
              OnChange = DBEdit16Change
              OnKeyPress = DBEdit16KeyPress
            end
            object DBEdit17: TDBEdit
              Left = 160
              Top = 128
              Width = 169
              Height = 21
              DataField = 'UCUNCU'
              DataSource = dsrcKOSU03
              TabOrder = 6
              OnChange = DBEdit17Change
              OnKeyPress = DBEdit17KeyPress
            end
            object DBEdit18: TDBEdit
              Left = 160
              Top = 152
              Width = 169
              Height = 21
              DataField = 'DORDUNCU'
              DataSource = dsrcKOSU03
              TabOrder = 7
              OnChange = DBEdit18Change
              OnKeyPress = DBEdit18KeyPress
            end
            object StaticText4: TStaticText
              Left = 64
              Top = 8
              Width = 273
              Height = 17
              Alignment = taCenter
              AutoSize = False
              BorderStyle = sbsSingle
              Caption = '3. Koþu'
              Color = clNavy
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWhite
              Font.Height = -11
              Font.Name = 'MS Sans Serif'
              Font.Style = []
              ParentColor = False
              ParentFont = False
              TabOrder = 8
            end
            object DBEdit65: TDBEdit
              Left = 160
              Top = 176
              Width = 169
              Height = 21
              DataField = 'CIKAN_ATLAR'
              DataSource = dsrcKOSU03
              TabOrder = 9
              OnChange = DBEdit65Change
              OnKeyPress = DBEdit65KeyPress
            end
            object DBEdit66: TDBEdit
              Left = 160
              Top = 200
              Width = 169
              Height = 21
              DataField = 'EFG'
              DataSource = dsrcKOSU03
              TabOrder = 10
              OnChange = DBEdit66Change
              OnKeyPress = DBEdit66KeyPress
            end
          end
          object TabSheet9: TTabSheet
            Caption = '4. Koþu'
            ImageIndex = 3
            object Label19: TLabel
              Left = 72
              Top = 32
              Width = 73
              Height = 13
              Caption = 'Koþan At Adedi'
            end
            object Label20: TLabel
              Left = 97
              Top = 56
              Width = 48
              Height = 13
              Caption = 'Eküri Atlar'
            end
            object Label21: TLabel
              Left = 117
              Top = 80
              Width = 28
              Height = 13
              Caption = 'Birinci'
            end
            object Label22: TLabel
              Left = 120
              Top = 104
              Width = 25
              Height = 13
              Caption = 'Ýkinci'
            end
            object Label23: TLabel
              Left = 107
              Top = 128
              Width = 38
              Height = 13
              Caption = 'Üçüncü'
            end
            object Label24: TLabel
              Left = 98
              Top = 152
              Width = 47
              Height = 13
              Caption = 'Dördüncü'
            end
            object Label74: TLabel
              Left = 94
              Top = 176
              Width = 51
              Height = 13
              Caption = 'Çýkan Atlar'
            end
            object Label75: TLabel
              Left = 115
              Top = 200
              Width = 30
              Height = 13
              Caption = 'E.F.G.'
            end
            object DBCheckBox7: TDBCheckBox
              Left = 256
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Üçlü Bahis'
              DataField = 'UCLU_BAHIS'
              DataSource = dsrcKOSU04
              TabOrder = 0
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox7Click
            end
            object DBCheckBox8: TDBCheckBox
              Left = 160
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Ýkili Bahis'
              DataField = 'IKILI_BAHIS'
              DataSource = dsrcKOSU04
              TabOrder = 1
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox8Click
            end
            object DBEdit19: TDBEdit
              Left = 160
              Top = 32
              Width = 73
              Height = 21
              DataField = 'KOSAN_AT_ADEDI'
              DataSource = dsrcKOSU04
              TabOrder = 2
              OnChange = DBEdit19Change
              OnKeyPress = DBEdit19KeyPress
            end
            object DBEdit20: TDBEdit
              Left = 160
              Top = 56
              Width = 169
              Height = 21
              DataField = 'EKURI_AT'
              DataSource = dsrcKOSU04
              TabOrder = 3
              OnChange = DBEdit20Change
              OnKeyPress = DBEdit20KeyPress
            end
            object DBEdit21: TDBEdit
              Left = 160
              Top = 80
              Width = 169
              Height = 21
              DataField = 'BIRINCI'
              DataSource = dsrcKOSU04
              TabOrder = 4
              OnChange = DBEdit21Change
              OnKeyPress = DBEdit21KeyPress
            end
            object DBEdit22: TDBEdit
              Left = 160
              Top = 104
              Width = 169
              Height = 21
              DataField = 'IKINCI'
              DataSource = dsrcKOSU04
              TabOrder = 5
              OnChange = DBEdit22Change
              OnKeyPress = DBEdit22KeyPress
            end
            object DBEdit23: TDBEdit
              Left = 160
              Top = 128
              Width = 169
              Height = 21
              DataField = 'UCUNCU'
              DataSource = dsrcKOSU04
              TabOrder = 6
              OnChange = DBEdit23Change
              OnKeyPress = DBEdit23KeyPress
            end
            object DBEdit24: TDBEdit
              Left = 160
              Top = 152
              Width = 169
              Height = 21
              DataField = 'DORDUNCU'
              DataSource = dsrcKOSU04
              TabOrder = 7
              OnChange = DBEdit24Change
              OnKeyPress = DBEdit24KeyPress
            end
            object StaticText5: TStaticText
              Left = 64
              Top = 8
              Width = 273
              Height = 17
              Alignment = taCenter
              AutoSize = False
              BorderStyle = sbsSingle
              Caption = '4. Koþu'
              Color = clNavy
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWhite
              Font.Height = -11
              Font.Name = 'MS Sans Serif'
              Font.Style = []
              ParentColor = False
              ParentFont = False
              TabOrder = 8
            end
            object DBEdit67: TDBEdit
              Left = 160
              Top = 176
              Width = 169
              Height = 21
              DataField = 'CIKAN_ATLAR'
              DataSource = dsrcKOSU04
              TabOrder = 9
              OnChange = DBEdit67Change
              OnKeyPress = DBEdit67KeyPress
            end
            object DBEdit68: TDBEdit
              Left = 160
              Top = 200
              Width = 169
              Height = 21
              DataField = 'EFG'
              DataSource = dsrcKOSU04
              TabOrder = 10
              OnChange = DBEdit68Change
              OnKeyPress = DBEdit68KeyPress
            end
          end
          object TabSheet10: TTabSheet
            Caption = '5. Koþu'
            ImageIndex = 4
            object Label25: TLabel
              Left = 72
              Top = 32
              Width = 73
              Height = 13
              Caption = 'Koþan At Adedi'
            end
            object Label26: TLabel
              Left = 97
              Top = 56
              Width = 48
              Height = 13
              Caption = 'Eküri Atlar'
            end
            object Label27: TLabel
              Left = 117
              Top = 80
              Width = 28
              Height = 13
              Caption = 'Birinci'
            end
            object Label28: TLabel
              Left = 120
              Top = 104
              Width = 25
              Height = 13
              Caption = 'Ýkinci'
            end
            object Label29: TLabel
              Left = 107
              Top = 128
              Width = 38
              Height = 13
              Caption = 'Üçüncü'
            end
            object Label30: TLabel
              Left = 98
              Top = 152
              Width = 47
              Height = 13
              Caption = 'Dördüncü'
            end
            object Label76: TLabel
              Left = 94
              Top = 176
              Width = 51
              Height = 13
              Caption = 'Çýkan Atlar'
            end
            object Label77: TLabel
              Left = 115
              Top = 200
              Width = 30
              Height = 13
              Caption = 'E.F.G.'
            end
            object DBCheckBox9: TDBCheckBox
              Left = 256
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Üçlü Bahis'
              DataField = 'UCLU_BAHIS'
              DataSource = dsrcKOSU05
              TabOrder = 0
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox9Click
            end
            object DBCheckBox10: TDBCheckBox
              Left = 160
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Ýkili Bahis'
              DataField = 'IKILI_BAHIS'
              DataSource = dsrcKOSU05
              TabOrder = 1
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox10Click
            end
            object DBEdit25: TDBEdit
              Left = 160
              Top = 32
              Width = 73
              Height = 21
              DataField = 'KOSAN_AT_ADEDI'
              DataSource = dsrcKOSU05
              TabOrder = 2
              OnChange = DBEdit25Change
              OnKeyPress = DBEdit25KeyPress
            end
            object DBEdit26: TDBEdit
              Left = 160
              Top = 56
              Width = 169
              Height = 21
              DataField = 'EKURI_AT'
              DataSource = dsrcKOSU05
              TabOrder = 3
              OnChange = DBEdit26Change
              OnKeyPress = DBEdit26KeyPress
            end
            object DBEdit27: TDBEdit
              Left = 160
              Top = 80
              Width = 169
              Height = 21
              DataField = 'BIRINCI'
              DataSource = dsrcKOSU05
              TabOrder = 4
              OnChange = DBEdit27Change
              OnKeyPress = DBEdit27KeyPress
            end
            object DBEdit28: TDBEdit
              Left = 160
              Top = 104
              Width = 169
              Height = 21
              DataField = 'IKINCI'
              DataSource = dsrcKOSU05
              TabOrder = 5
              OnChange = DBEdit28Change
              OnKeyPress = DBEdit28KeyPress
            end
            object DBEdit29: TDBEdit
              Left = 160
              Top = 128
              Width = 169
              Height = 21
              DataField = 'UCUNCU'
              DataSource = dsrcKOSU05
              TabOrder = 6
              OnChange = DBEdit29Change
              OnKeyPress = DBEdit29KeyPress
            end
            object DBEdit30: TDBEdit
              Left = 160
              Top = 152
              Width = 169
              Height = 21
              DataField = 'DORDUNCU'
              DataSource = dsrcKOSU05
              TabOrder = 7
              OnChange = DBEdit30Change
              OnKeyPress = DBEdit30KeyPress
            end
            object StaticText1: TStaticText
              Left = 64
              Top = 8
              Width = 273
              Height = 17
              Alignment = taCenter
              AutoSize = False
              BorderStyle = sbsSingle
              Caption = '5. Koþu'
              Color = clNavy
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWhite
              Font.Height = -11
              Font.Name = 'MS Sans Serif'
              Font.Style = []
              ParentColor = False
              ParentFont = False
              TabOrder = 8
            end
            object DBEdit69: TDBEdit
              Left = 160
              Top = 176
              Width = 169
              Height = 21
              DataField = 'CIKAN_ATLAR'
              DataSource = dsrcKOSU05
              TabOrder = 9
              OnChange = DBEdit69Change
              OnKeyPress = DBEdit69KeyPress
            end
            object DBEdit70: TDBEdit
              Left = 160
              Top = 200
              Width = 169
              Height = 21
              DataField = 'EFG'
              DataSource = dsrcKOSU05
              TabOrder = 10
              OnChange = DBEdit70Change
              OnKeyPress = DBEdit70KeyPress
            end
          end
          object TabSheet11: TTabSheet
            Caption = '6. Koþu'
            ImageIndex = 5
            object Label31: TLabel
              Left = 72
              Top = 32
              Width = 73
              Height = 13
              Caption = 'Koþan At Adedi'
            end
            object Label32: TLabel
              Left = 97
              Top = 56
              Width = 48
              Height = 13
              Caption = 'Eküri Atlar'
            end
            object Label33: TLabel
              Left = 117
              Top = 80
              Width = 28
              Height = 13
              Caption = 'Birinci'
            end
            object Label34: TLabel
              Left = 120
              Top = 104
              Width = 25
              Height = 13
              Caption = 'Ýkinci'
            end
            object Label35: TLabel
              Left = 107
              Top = 128
              Width = 38
              Height = 13
              Caption = 'Üçüncü'
            end
            object Label36: TLabel
              Left = 98
              Top = 152
              Width = 47
              Height = 13
              Caption = 'Dördüncü'
            end
            object Label78: TLabel
              Left = 94
              Top = 176
              Width = 51
              Height = 13
              Caption = 'Çýkan Atlar'
            end
            object Label79: TLabel
              Left = 115
              Top = 200
              Width = 30
              Height = 13
              Caption = 'E.F.G.'
            end
            object DBCheckBox11: TDBCheckBox
              Left = 256
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Üçlü Bahis'
              DataField = 'UCLU_BAHIS'
              DataSource = dsrcKOSU06
              TabOrder = 0
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox11Click
            end
            object DBCheckBox12: TDBCheckBox
              Left = 160
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Ýkili Bahis'
              DataField = 'IKILI_BAHIS'
              DataSource = dsrcKOSU06
              TabOrder = 1
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox12Click
            end
            object DBEdit31: TDBEdit
              Left = 160
              Top = 32
              Width = 73
              Height = 21
              DataField = 'KOSAN_AT_ADEDI'
              DataSource = dsrcKOSU06
              TabOrder = 2
              OnChange = DBEdit31Change
              OnKeyPress = DBEdit31KeyPress
            end
            object DBEdit32: TDBEdit
              Left = 160
              Top = 56
              Width = 169
              Height = 21
              DataField = 'EKURI_AT'
              DataSource = dsrcKOSU06
              TabOrder = 3
              OnChange = DBEdit32Change
              OnKeyPress = DBEdit32KeyPress
            end
            object DBEdit33: TDBEdit
              Left = 160
              Top = 80
              Width = 169
              Height = 21
              DataField = 'BIRINCI'
              DataSource = dsrcKOSU06
              TabOrder = 4
              OnChange = DBEdit33Change
              OnKeyPress = DBEdit33KeyPress
            end
            object DBEdit34: TDBEdit
              Left = 160
              Top = 104
              Width = 169
              Height = 21
              DataField = 'IKINCI'
              DataSource = dsrcKOSU06
              TabOrder = 5
              OnChange = DBEdit34Change
              OnKeyPress = DBEdit34KeyPress
            end
            object DBEdit35: TDBEdit
              Left = 160
              Top = 128
              Width = 169
              Height = 21
              DataField = 'UCUNCU'
              DataSource = dsrcKOSU06
              TabOrder = 6
              OnChange = DBEdit35Change
              OnKeyPress = DBEdit35KeyPress
            end
            object DBEdit36: TDBEdit
              Left = 160
              Top = 152
              Width = 169
              Height = 21
              DataField = 'DORDUNCU'
              DataSource = dsrcKOSU06
              TabOrder = 7
              OnChange = DBEdit36Change
              OnKeyPress = DBEdit36KeyPress
            end
            object StaticText6: TStaticText
              Left = 64
              Top = 8
              Width = 273
              Height = 17
              Alignment = taCenter
              AutoSize = False
              BorderStyle = sbsSingle
              Caption = '6. Koþu'
              Color = clNavy
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWhite
              Font.Height = -11
              Font.Name = 'MS Sans Serif'
              Font.Style = []
              ParentColor = False
              ParentFont = False
              TabOrder = 8
            end
            object DBEdit71: TDBEdit
              Left = 160
              Top = 176
              Width = 169
              Height = 21
              DataField = 'CIKAN_ATLAR'
              DataSource = dsrcKOSU06
              TabOrder = 9
              OnChange = DBEdit71Change
              OnKeyPress = DBEdit71KeyPress
            end
            object DBEdit72: TDBEdit
              Left = 160
              Top = 200
              Width = 169
              Height = 21
              DataField = 'EFG'
              DataSource = dsrcKOSU06
              TabOrder = 10
              OnChange = DBEdit72Change
              OnKeyPress = DBEdit72KeyPress
            end
          end
          object TabSheet12: TTabSheet
            Caption = '7. Koþu'
            ImageIndex = 6
            object Label37: TLabel
              Left = 72
              Top = 32
              Width = 73
              Height = 13
              Caption = 'Koþan At Adedi'
            end
            object Label38: TLabel
              Left = 97
              Top = 56
              Width = 48
              Height = 13
              Caption = 'Eküri Atlar'
            end
            object Label39: TLabel
              Left = 117
              Top = 80
              Width = 28
              Height = 13
              Caption = 'Birinci'
            end
            object Label40: TLabel
              Left = 120
              Top = 104
              Width = 25
              Height = 13
              Caption = 'Ýkinci'
            end
            object Label41: TLabel
              Left = 107
              Top = 128
              Width = 38
              Height = 13
              Caption = 'Üçüncü'
            end
            object Label42: TLabel
              Left = 98
              Top = 152
              Width = 47
              Height = 13
              Caption = 'Dördüncü'
            end
            object Label80: TLabel
              Left = 94
              Top = 176
              Width = 51
              Height = 13
              Caption = 'Çýkan Atlar'
            end
            object Label81: TLabel
              Left = 115
              Top = 200
              Width = 30
              Height = 13
              Caption = 'E.F.G.'
            end
            object DBCheckBox13: TDBCheckBox
              Left = 256
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Üçlü Bahis'
              DataField = 'UCLU_BAHIS'
              DataSource = dsrcKOSU07
              TabOrder = 0
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox13Click
            end
            object DBCheckBox14: TDBCheckBox
              Left = 160
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Ýkili Bahis'
              DataField = 'IKILI_BAHIS'
              DataSource = dsrcKOSU07
              TabOrder = 1
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox14Click
            end
            object DBEdit37: TDBEdit
              Left = 160
              Top = 32
              Width = 73
              Height = 21
              DataField = 'KOSAN_AT_ADEDI'
              DataSource = dsrcKOSU07
              TabOrder = 2
              OnChange = DBEdit37Change
              OnKeyPress = DBEdit37KeyPress
            end
            object DBEdit38: TDBEdit
              Left = 160
              Top = 56
              Width = 169
              Height = 21
              DataField = 'EKURI_AT'
              DataSource = dsrcKOSU07
              TabOrder = 3
              OnChange = DBEdit38Change
              OnKeyPress = DBEdit38KeyPress
            end
            object DBEdit39: TDBEdit
              Left = 160
              Top = 80
              Width = 169
              Height = 21
              DataField = 'BIRINCI'
              DataSource = dsrcKOSU07
              TabOrder = 4
              OnChange = DBEdit39Change
              OnKeyPress = DBEdit39KeyPress
            end
            object DBEdit40: TDBEdit
              Left = 160
              Top = 104
              Width = 169
              Height = 21
              DataField = 'IKINCI'
              DataSource = dsrcKOSU07
              TabOrder = 5
              OnChange = DBEdit40Change
              OnKeyPress = DBEdit40KeyPress
            end
            object DBEdit41: TDBEdit
              Left = 160
              Top = 128
              Width = 169
              Height = 21
              DataField = 'UCUNCU'
              DataSource = dsrcKOSU07
              TabOrder = 6
              OnChange = DBEdit41Change
              OnKeyPress = DBEdit41KeyPress
            end
            object DBEdit42: TDBEdit
              Left = 160
              Top = 152
              Width = 169
              Height = 21
              DataField = 'DORDUNCU'
              DataSource = dsrcKOSU07
              TabOrder = 7
              OnChange = DBEdit42Change
              OnKeyPress = DBEdit42KeyPress
            end
            object StaticText7: TStaticText
              Left = 64
              Top = 8
              Width = 273
              Height = 17
              Alignment = taCenter
              AutoSize = False
              BorderStyle = sbsSingle
              Caption = '7. Koþu'
              Color = clNavy
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWhite
              Font.Height = -11
              Font.Name = 'MS Sans Serif'
              Font.Style = []
              ParentColor = False
              ParentFont = False
              TabOrder = 8
            end
            object DBEdit73: TDBEdit
              Left = 160
              Top = 176
              Width = 169
              Height = 21
              DataField = 'CIKAN_ATLAR'
              DataSource = dsrcKOSU07
              TabOrder = 9
              OnChange = DBEdit73Change
              OnKeyPress = DBEdit73KeyPress
            end
            object DBEdit74: TDBEdit
              Left = 160
              Top = 200
              Width = 169
              Height = 21
              DataField = 'EFG'
              DataSource = dsrcKOSU07
              TabOrder = 10
              OnChange = DBEdit74Change
              OnKeyPress = DBEdit74KeyPress
            end
          end
          object TabSheet13: TTabSheet
            Caption = '8. Koþu'
            ImageIndex = 7
            object Label43: TLabel
              Left = 72
              Top = 32
              Width = 73
              Height = 13
              Caption = 'Koþan At Adedi'
            end
            object Label44: TLabel
              Left = 97
              Top = 56
              Width = 48
              Height = 13
              Caption = 'Eküri Atlar'
            end
            object Label45: TLabel
              Left = 117
              Top = 80
              Width = 28
              Height = 13
              Caption = 'Birinci'
            end
            object Label46: TLabel
              Left = 120
              Top = 104
              Width = 25
              Height = 13
              Caption = 'Ýkinci'
            end
            object Label47: TLabel
              Left = 107
              Top = 128
              Width = 38
              Height = 13
              Caption = 'Üçüncü'
            end
            object Label48: TLabel
              Left = 98
              Top = 152
              Width = 47
              Height = 13
              Caption = 'Dördüncü'
            end
            object Label82: TLabel
              Left = 94
              Top = 176
              Width = 51
              Height = 13
              Caption = 'Çýkan Atlar'
            end
            object Label83: TLabel
              Left = 115
              Top = 200
              Width = 30
              Height = 13
              Caption = 'E.F.G.'
            end
            object DBCheckBox15: TDBCheckBox
              Left = 256
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Üçlü Bahis'
              DataField = 'UCLU_BAHIS'
              DataSource = dsrcKOSU08
              TabOrder = 0
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox15Click
            end
            object DBCheckBox16: TDBCheckBox
              Left = 160
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Ýkili Bahis'
              DataField = 'IKILI_BAHIS'
              DataSource = dsrcKOSU08
              TabOrder = 1
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox16Click
            end
            object DBEdit43: TDBEdit
              Left = 160
              Top = 32
              Width = 73
              Height = 21
              DataField = 'KOSAN_AT_ADEDI'
              DataSource = dsrcKOSU08
              TabOrder = 2
              OnChange = DBEdit43Change
              OnKeyPress = DBEdit43KeyPress
            end
            object DBEdit44: TDBEdit
              Left = 160
              Top = 56
              Width = 169
              Height = 21
              DataField = 'EKURI_AT'
              DataSource = dsrcKOSU08
              TabOrder = 3
              OnChange = DBEdit44Change
              OnKeyPress = DBEdit44KeyPress
            end
            object DBEdit45: TDBEdit
              Left = 160
              Top = 80
              Width = 169
              Height = 21
              DataField = 'BIRINCI'
              DataSource = dsrcKOSU08
              TabOrder = 4
              OnChange = DBEdit45Change
              OnKeyPress = DBEdit45KeyPress
            end
            object DBEdit46: TDBEdit
              Left = 160
              Top = 104
              Width = 169
              Height = 21
              DataField = 'IKINCI'
              DataSource = dsrcKOSU08
              TabOrder = 5
              OnChange = DBEdit46Change
              OnKeyPress = DBEdit46KeyPress
            end
            object DBEdit47: TDBEdit
              Left = 160
              Top = 128
              Width = 169
              Height = 21
              DataField = 'UCUNCU'
              DataSource = dsrcKOSU08
              TabOrder = 6
              OnChange = DBEdit47Change
              OnKeyPress = DBEdit47KeyPress
            end
            object DBEdit48: TDBEdit
              Left = 160
              Top = 152
              Width = 169
              Height = 21
              DataField = 'DORDUNCU'
              DataSource = dsrcKOSU08
              TabOrder = 7
              OnChange = DBEdit48Change
              OnKeyPress = DBEdit48KeyPress
            end
            object StaticText8: TStaticText
              Left = 64
              Top = 8
              Width = 273
              Height = 17
              Alignment = taCenter
              AutoSize = False
              BorderStyle = sbsSingle
              Caption = '8. Koþu'
              Color = clNavy
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWhite
              Font.Height = -11
              Font.Name = 'MS Sans Serif'
              Font.Style = []
              ParentColor = False
              ParentFont = False
              TabOrder = 8
            end
            object DBEdit75: TDBEdit
              Left = 160
              Top = 176
              Width = 169
              Height = 21
              DataField = 'CIKAN_ATLAR'
              DataSource = dsrcKOSU08
              TabOrder = 9
              OnChange = DBEdit75Change
              OnKeyPress = DBEdit75KeyPress
            end
            object DBEdit76: TDBEdit
              Left = 160
              Top = 200
              Width = 169
              Height = 21
              DataField = 'EFG'
              DataSource = dsrcKOSU08
              TabOrder = 10
              OnChange = DBEdit76Change
              OnKeyPress = DBEdit76KeyPress
            end
          end
          object TabSheet14: TTabSheet
            Caption = '9. Koþu'
            ImageIndex = 8
            object Label49: TLabel
              Left = 72
              Top = 32
              Width = 73
              Height = 13
              Caption = 'Koþan At Adedi'
            end
            object Label50: TLabel
              Left = 97
              Top = 56
              Width = 48
              Height = 13
              Caption = 'Eküri Atlar'
            end
            object Label51: TLabel
              Left = 117
              Top = 80
              Width = 28
              Height = 13
              Caption = 'Birinci'
            end
            object Label52: TLabel
              Left = 120
              Top = 104
              Width = 25
              Height = 13
              Caption = 'Ýkinci'
            end
            object Label53: TLabel
              Left = 107
              Top = 128
              Width = 38
              Height = 13
              Caption = 'Üçüncü'
            end
            object Label54: TLabel
              Left = 98
              Top = 152
              Width = 47
              Height = 13
              Caption = 'Dördüncü'
            end
            object Label84: TLabel
              Left = 94
              Top = 176
              Width = 51
              Height = 13
              Caption = 'Çýkan Atlar'
            end
            object Label85: TLabel
              Left = 115
              Top = 200
              Width = 30
              Height = 13
              Caption = 'E.F.G.'
            end
            object DBCheckBox17: TDBCheckBox
              Left = 256
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Üçlü Bahis'
              DataField = 'UCLU_BAHIS'
              DataSource = dsrcKOSU09
              TabOrder = 0
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox17Click
            end
            object DBCheckBox18: TDBCheckBox
              Left = 160
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Ýkili Bahis'
              DataField = 'IKILI_BAHIS'
              DataSource = dsrcKOSU09
              TabOrder = 1
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox18Click
            end
            object DBEdit49: TDBEdit
              Left = 160
              Top = 32
              Width = 73
              Height = 21
              DataField = 'KOSAN_AT_ADEDI'
              DataSource = dsrcKOSU09
              TabOrder = 2
              OnChange = DBEdit49Change
              OnKeyPress = DBEdit49KeyPress
            end
            object DBEdit50: TDBEdit
              Left = 160
              Top = 56
              Width = 169
              Height = 21
              DataField = 'EKURI_AT'
              DataSource = dsrcKOSU09
              TabOrder = 3
              OnChange = DBEdit50Change
              OnKeyPress = DBEdit50KeyPress
            end
            object DBEdit51: TDBEdit
              Left = 160
              Top = 80
              Width = 169
              Height = 21
              DataField = 'BIRINCI'
              DataSource = dsrcKOSU09
              TabOrder = 4
              OnChange = DBEdit51Change
              OnKeyPress = DBEdit51KeyPress
            end
            object DBEdit52: TDBEdit
              Left = 160
              Top = 104
              Width = 169
              Height = 21
              DataField = 'IKINCI'
              DataSource = dsrcKOSU09
              TabOrder = 5
              OnChange = DBEdit52Change
              OnKeyPress = DBEdit52KeyPress
            end
            object DBEdit53: TDBEdit
              Left = 160
              Top = 128
              Width = 169
              Height = 21
              DataField = 'UCUNCU'
              DataSource = dsrcKOSU09
              TabOrder = 6
              OnChange = DBEdit53Change
              OnKeyPress = DBEdit53KeyPress
            end
            object DBEdit54: TDBEdit
              Left = 160
              Top = 152
              Width = 169
              Height = 21
              DataField = 'DORDUNCU'
              DataSource = dsrcKOSU09
              TabOrder = 7
              OnChange = DBEdit54Change
              OnKeyPress = DBEdit54KeyPress
            end
            object StaticText9: TStaticText
              Left = 64
              Top = 8
              Width = 273
              Height = 17
              Alignment = taCenter
              AutoSize = False
              BorderStyle = sbsSingle
              Caption = '9. Koþu'
              Color = clNavy
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWhite
              Font.Height = -11
              Font.Name = 'MS Sans Serif'
              Font.Style = []
              ParentColor = False
              ParentFont = False
              TabOrder = 8
            end
            object DBEdit77: TDBEdit
              Left = 160
              Top = 176
              Width = 169
              Height = 21
              DataField = 'CIKAN_ATLAR'
              DataSource = dsrcKOSU09
              TabOrder = 9
              OnChange = DBEdit77Change
              OnKeyPress = DBEdit77KeyPress
            end
            object DBEdit78: TDBEdit
              Left = 160
              Top = 200
              Width = 169
              Height = 21
              DataField = 'EFG'
              DataSource = dsrcKOSU09
              TabOrder = 10
              OnChange = DBEdit78Change
              OnKeyPress = DBEdit78KeyPress
            end
          end
          object TabSheet15: TTabSheet
            Caption = '10. Koþu'
            ImageIndex = 9
            object Label55: TLabel
              Left = 72
              Top = 32
              Width = 73
              Height = 13
              Caption = 'Koþan At Adedi'
            end
            object Label56: TLabel
              Left = 97
              Top = 56
              Width = 48
              Height = 13
              Caption = 'Eküri Atlar'
            end
            object Label57: TLabel
              Left = 117
              Top = 80
              Width = 28
              Height = 13
              Caption = 'Birinci'
            end
            object Label58: TLabel
              Left = 120
              Top = 104
              Width = 25
              Height = 13
              Caption = 'Ýkinci'
            end
            object Label59: TLabel
              Left = 107
              Top = 128
              Width = 38
              Height = 13
              Caption = 'Üçüncü'
            end
            object Label60: TLabel
              Left = 98
              Top = 152
              Width = 47
              Height = 13
              Caption = 'Dördüncü'
            end
            object Label86: TLabel
              Left = 94
              Top = 176
              Width = 51
              Height = 13
              Caption = 'Çýkan Atlar'
            end
            object Label87: TLabel
              Left = 115
              Top = 200
              Width = 30
              Height = 13
              Caption = 'E.F.G.'
            end
            object DBCheckBox19: TDBCheckBox
              Left = 256
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Üçlü Bahis'
              DataField = 'UCLU_BAHIS'
              DataSource = dsrcKOSU10
              TabOrder = 0
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox19Click
            end
            object DBCheckBox20: TDBCheckBox
              Left = 160
              Top = 232
              Width = 73
              Height = 17
              Caption = 'Ýkili Bahis'
              DataField = 'IKILI_BAHIS'
              DataSource = dsrcKOSU10
              TabOrder = 1
              ValueChecked = 'True'
              ValueUnchecked = 'False'
              OnClick = DBCheckBox20Click
            end
            object DBEdit55: TDBEdit
              Left = 160
              Top = 32
              Width = 73
              Height = 21
              DataField = 'KOSAN_AT_ADEDI'
              DataSource = dsrcKOSU10
              TabOrder = 2
              OnChange = DBEdit55Change
              OnKeyPress = DBEdit55KeyPress
            end
            object DBEdit56: TDBEdit
              Left = 160
              Top = 56
              Width = 169
              Height = 21
              DataField = 'EKURI_AT'
              DataSource = dsrcKOSU10
              TabOrder = 3
              OnChange = DBEdit56Change
              OnKeyPress = DBEdit56KeyPress
            end
            object DBEdit57: TDBEdit
              Left = 160
              Top = 80
              Width = 169
              Height = 21
              DataField = 'BIRINCI'
              DataSource = dsrcKOSU10
              TabOrder = 4
              OnChange = DBEdit57Change
              OnKeyPress = DBEdit57KeyPress
            end
            object DBEdit58: TDBEdit
              Left = 160
              Top = 104
              Width = 169
              Height = 21
              DataField = 'IKINCI'
              DataSource = dsrcKOSU10
              TabOrder = 5
              OnChange = DBEdit58Change
              OnKeyPress = DBEdit58KeyPress
            end
            object DBEdit59: TDBEdit
              Left = 160
              Top = 128
              Width = 169
              Height = 21
              DataField = 'UCUNCU'
              DataSource = dsrcKOSU10
              TabOrder = 6
              OnChange = DBEdit59Change
              OnKeyPress = DBEdit59KeyPress
            end
            object DBEdit60: TDBEdit
              Left = 160
              Top = 152
              Width = 169
              Height = 21
              DataField = 'DORDUNCU'
              DataSource = dsrcKOSU10
              TabOrder = 7
              OnChange = DBEdit60Change
              OnKeyPress = DBEdit60KeyPress
            end
            object StaticText10: TStaticText
              Left = 64
              Top = 8
              Width = 273
              Height = 17
              Alignment = taCenter
              AutoSize = False
              BorderStyle = sbsSingle
              Caption = '10. Koþu'
              Color = clNavy
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWhite
              Font.Height = -11
              Font.Name = 'MS Sans Serif'
              Font.Style = []
              ParentColor = False
              ParentFont = False
              TabOrder = 8
            end
            object DBEdit79: TDBEdit
              Left = 160
              Top = 176
              Width = 169
              Height = 21
              DataField = 'CIKAN_ATLAR'
              DataSource = dsrcKOSU10
              TabOrder = 9
              OnChange = DBEdit79Change
              OnKeyPress = DBEdit79KeyPress
            end
            object DBEdit80: TDBEdit
              Left = 160
              Top = 200
              Width = 169
              Height = 21
              DataField = 'EFG'
              DataSource = dsrcKOSU10
              TabOrder = 10
              OnChange = DBEdit80Change
              OnKeyPress = DBEdit80KeyPress
            end
          end
        end
      end
      object GroupBox2: TGroupBox
        Left = 432
        Top = 0
        Width = 217
        Height = 305
        Caption = ' Genel koþu Bilgileri '
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clActiveCaption
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
        object Label61: TLabel
          Left = 26
          Top = 24
          Width = 54
          Height = 13
          Caption = 'Koþu Sayýsý'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
        end
        object Label62: TLabel
          Left = 6
          Top = 48
          Width = 74
          Height = 13
          Caption = '1. Çifte Ýlk Koþu'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
        end
        object Label63: TLabel
          Left = 6
          Top = 72
          Width = 74
          Height = 13
          Caption = '2. Çifte Ýlk Koþu'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
        end
        object Label64: TLabel
          Left = 6
          Top = 96
          Width = 74
          Height = 13
          Caption = '3. Çifte Ýlk Koþu'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
        end
        object Label65: TLabel
          Left = 6
          Top = 120
          Width = 74
          Height = 13
          Caption = '4. Çifte Ýlk Koþu'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
        end
        object Bevel2: TBevel
          Left = 8
          Top = 200
          Width = 201
          Height = 97
        end
        object Label66: TLabel
          Left = 16
          Top = 208
          Width = 59
          Height = 13
          Caption = 'Altýlý Ýlk Koþu'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMenuText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
        end
        object Label67: TLabel
          Left = 16
          Top = 248
          Width = 63
          Height = 13
          Caption = 'Üçlü Ýlk Koþu'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMenuText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
        end
        object Label88: TLabel
          Left = 18
          Top = 144
          Width = 62
          Height = 13
          Caption = 'Tabela Bahis'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMenuText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
        end
        object Label89: TLabel
          Left = 16
          Top = 168
          Width = 60
          Height = 13
          Caption = 'Altýlý Ýkramiye'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
        end
        object dbeditKOSUSAYISI: TDBEdit
          Left = 88
          Top = 24
          Width = 121
          Height = 21
          DataField = 'KOSU_SAYISI'
          DataSource = dsrcYARIS
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 0
          OnChange = dbeditKOSUSAYISIChange
          OnKeyPress = dbeditKOSUSAYISIKeyPress
        end
        object dbeditBIRINCICIFTE: TDBEdit
          Left = 88
          Top = 48
          Width = 121
          Height = 21
          DataField = 'BIRINCI_CIFTE'
          DataSource = dsrcYARIS
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 1
          OnChange = dbeditBIRINCICIFTEChange
          OnKeyPress = dbeditBIRINCICIFTEKeyPress
        end
        object dbeditIKINCICIFTE: TDBEdit
          Left = 88
          Top = 72
          Width = 121
          Height = 21
          DataField = 'IKINCI_CIFTE'
          DataSource = dsrcYARIS
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 2
          OnChange = dbeditIKINCICIFTEChange
          OnKeyPress = dbeditIKINCICIFTEKeyPress
        end
        object dbeditUCUNCUCIFTE: TDBEdit
          Left = 88
          Top = 96
          Width = 121
          Height = 21
          DataField = 'UCUNCU_CIFTE'
          DataSource = dsrcYARIS
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 3
          OnChange = dbeditUCUNCUCIFTEChange
          OnKeyPress = dbeditUCUNCUCIFTEKeyPress
        end
        object dbeditDORDUNCUCIFTE: TDBEdit
          Left = 88
          Top = 120
          Width = 121
          Height = 21
          DataField = 'DORDUNCU_CIFTE'
          DataSource = dsrcYARIS
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 4
          OnChange = dbeditDORDUNCUCIFTEChange
          OnKeyPress = dbeditDORDUNCUCIFTEKeyPress
        end
        object dbeditALTILIILKKOSU: TDBEdit
          Left = 16
          Top = 224
          Width = 185
          Height = 21
          DataField = 'ALTILI_GANYAN'
          DataSource = dsrcYARIS
          Enabled = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMenuText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 5
          OnChange = dbeditALTILIILKKOSUChange
        end
        object dbeditUCLUILKKOSU: TDBEdit
          Left = 16
          Top = 264
          Width = 185
          Height = 21
          DataField = 'UCLU_GANYAN'
          DataSource = dsrcYARIS
          Enabled = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMenuText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 6
          OnChange = dbeditUCLUILKKOSUChange
        end
        object dbeditTABELA: TDBEdit
          Left = 88
          Top = 144
          Width = 121
          Height = 21
          DataField = 'TABELAKOSUSU'
          DataSource = dsrcYARIS
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMenuText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 7
        end
        object DBEdit81: TDBEdit
          Left = 88
          Top = 168
          Width = 121
          Height = 21
          DataField = 'ALTILI_IKRAMIYE'
          DataSource = dsrcYARIS
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 8
        end
      end
    end
    object TabSheet5: TTabSheet
      Caption = 'Günlük Sonuç Tablosu'
      ImageIndex = 4
      object DBGrid4: TDBGrid
        Left = 0
        Top = 0
        Width = 649
        Height = 305
        Color = clBtnHighlight
        DataSource = dsrcSONUC
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = []
        Columns = <
          item
            Alignment = taRightJustify
            Color = clHighlight
            Expanded = False
            FieldName = 'GAZETELER'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWhite
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ReadOnly = True
            Title.Alignment = taCenter
            Title.Caption = 'Gazete'
            Width = 110
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'GANYANTOP'
            ReadOnly = True
            Title.Alignment = taCenter
            Title.Caption = 'Gan.Top.'
            Width = 62
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'ALTILI'
            ReadOnly = True
            Title.Alignment = taCenter
            Title.Caption = 'Altýlý'
            Width = 62
            Visible = True
          end
          item
            Color = clCaptionText
            Expanded = False
            FieldName = 'IKILI'
            ReadOnly = True
            Title.Alignment = taCenter
            Title.Caption = 'Ýkili'
            Width = 62
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'CITE'
            ReadOnly = True
            Title.Alignment = taCenter
            Title.Caption = 'Çifte'
            Width = 62
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'SIRALIUCLU'
            ReadOnly = True
            Title.Alignment = taCenter
            Title.Caption = 'Sýralý 3'#39'lü'
            Width = 62
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'TABELADORTLU'
            ReadOnly = True
            Title.Alignment = taCenter
            Title.Caption = 'Tabela 4'#39'lü'
            Width = 62
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'UCLUGANYAN'
            ReadOnly = True
            Title.Alignment = taCenter
            Title.Caption = '3'#39'lü Gan.'
            Width = 62
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'GENTOP'
            ReadOnly = True
            Title.Alignment = taCenter
            Title.Caption = 'G. Toplam'
            Width = 62
            Visible = True
          end>
      end
    end
  end
  object ToolBar1: TToolBar
    Left = 0
    Top = 0
    Width = 658
    Height = 25
    Caption = 'ToolBar1'
    Flat = True
    Images = ImageList1
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    object ToolButton2: TToolButton
      Left = 0
      Top = 0
      Width = 8
      Caption = 'ToolButton2'
      ImageIndex = 0
      Style = tbsSeparator
    end
    object DateTimePicker1: TDateTimePicker
      Left = 8
      Top = 0
      Width = 113
      Height = 22
      CalAlignment = dtaLeft
      Date = 37076.61328125
      Time = 37076.61328125
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 0
      OnChange = DateTimePicker1Change
    end
    object ToolButton5: TToolButton
      Left = 121
      Top = 0
      Width = 8
      Caption = 'ToolButton5'
      ImageIndex = 4
      Style = tbsSeparator
    end
    object ToolButton7: TToolButton
      Left = 129
      Top = 0
      Hint = 'Yeni'
      Caption = 'ToolButton7'
      ImageIndex = 0
      OnClick = ToolButton7Click
    end
    object ToolButton1: TToolButton
      Left = 152
      Top = 0
      Width = 8
      Caption = 'ToolButton1'
      Style = tbsSeparator
    end
    object tbtnKAYDET: TToolButton
      Left = 160
      Top = 0
      Hint = 'Kaydet'
      Caption = 'tbtnKAYDET'
      ImageIndex = 1
      OnClick = tbtnKAYDETClick
    end
    object tbtnSIL: TToolButton
      Left = 183
      Top = 0
      Hint = 'Sil'
      Caption = 'tbtnSIL'
      ImageIndex = 2
      OnClick = tbtnSILClick
    end
    object ToolButton6: TToolButton
      Left = 206
      Top = 0
      Width = 8
      Caption = 'ToolButton6'
      ImageIndex = 3
      Style = tbsSeparator
    end
    object tbtnCALISTIR: TToolButton
      Left = 214
      Top = 0
      Hint = 'Baþlat'
      Caption = 'tbtnCALISTIR'
      ImageIndex = 3
      OnClick = tbtnCALISTIRClick
    end
    object ToolButton3: TToolButton
      Left = 237
      Top = 0
      Width = 8
      Caption = 'ToolButton3'
      ImageIndex = 3
      Style = tbsSeparator
    end
    object ToolButton4: TToolButton
      Left = 245
      Top = 0
      Hint = 'Yazdýr'
      Caption = 'ToolButton4'
      ImageIndex = 4
      OnClick = ToolButton4Click
    end
    object ToolButton8: TToolButton
      Left = 268
      Top = 0
      Width = 8
      Caption = 'ToolButton8'
      ImageIndex = 4
      Style = tbsSeparator
    end
    object ToolButton9: TToolButton
      Left = 276
      Top = 0
      Hint = 'Ayarlar'
      Caption = 'ToolButton9'
      ImageIndex = 5
      OnClick = ToolButton9Click
    end
  end
  object ImageList1: TImageList
    Left = 672
    Top = 314
    Bitmap = {
      494C010106000900040010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000003000000001001000000000000018
      0000000000000000000000000000000000000000000000002000100008008100
      0000BF3BC00000000000361000000010000000000000FF7FFF7FFF7FF97FE01F
      C000E77EF87FE00FCF7AE379F83FE007CF78E173F81FE003CF78F867F80FE003
      CF78FC0FF807E003CF78FE1FF803E003CF78FC0FF801E003C000F867F801E003
      C000F173F803E003C000E37BF807E003C01826010000247FBA00C7000000C700
      0000C7000000E728000000000000FF7F0000007800000719030020010000B507
      000000000000000000000000000000000000A00100001B00A33807010000EC07
      0000F71C0000C7000000C7000000E72800000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000003E0EA140300EA140FC7FBA00D05F606400000000604AFC5F300B
      82640C000A0006000000384DF85FBF0000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000010000000F21E006002010000ED1E
      B600D03782640100000034005261FC5C0060D03782644F5D006080380160BE58
      00601000000038000000D4590060F00C8264F47AB2604C5F6064385F60643400
      5261F00C826402000000FF7FFF7F4263046080190A60200A0060B05F60643400
      5261B05F6064DB0A0A607449A74000000000297B06601F0000007449A740F00C
      8264300B8264F00C82641F000000C5130060887A0460F00C8264300B82644C5F
      6064E05E60647449A740F00C82640000000026010000D0378264F47BB2604C5F
      6064005F606400000000CD1D0560401D056057000000595D00601045A2604C5F
      6064005F6064000000005029B0600C0A016000000000007C0416690201000000
      0000BC5E606406000000405F5B611034D060E7770760405F5B61060000001034
      D0601034D0601034D060A66CEA6301040860D47CBA00B26CEA63070000000000
      00001034D0601034D0607765006053010000E8120360F00C8264F00C8264300B
      8264300B826474492700C45E60644C5F6064010000002840AE60020082648C78
      076034005261BC5E6064CC4A0F602840AE60020082648C78076034005261B850
      AB60F80BAC60D05E6064840000000100000000000000CC3199641C0000000000
      0000000000000000000000000000000000000000000000000000007C04166900
      0000800000000000000000000000000000007765006057010000952A01608C78
      0760603001602C5969631040AE60020082648C78076000000000301CD27FCC38
      0160800000000076DF7FB93010601040AE6000000000BB4C1060707DAB600200
      82648C78076034005261545E6064CB4D1060020082648C780760340052610000
      0000F00C82641840AE60505E6064002C10602C5E606400000000370604601047
      2560C85C29601260216008000600E85100605C030460303301602C5E60640400
      00000800000000000000E8518000301CD27F301CD27F0000000000000000BD4C
      1060BB4C1060707DAB60020082648C780760BE5C29602C1CD27F12602160301C
      D27F00460C00010000000200826401000000E001CE6200000000000000000000
      00000000000000000000C029AB60A05F0100FF7FFF7FA3010030DB7DFF7F3400
      5261BE5C2960126021600A5E6064EF36006012602160BE5C2960541B01600A5E
      6064000000001200000000000000260100007C2700608A330060A01AA560BE5C
      2960C85C29600A5E60640800060000000000B05F6064545D6064340052610000
      0000A001003000000000D62203602861030C80007F00F50D0100A06AD460FF7F
      FF7FE83EA96000000200407DA2600000000000000000B46CD460B06CD4600000
      0000000021000010A06AD460A26AD4605860280B000000000000380000000106
      0000010600000000000047400000050400004E180460474000003D1F0460911F
      0460E6660460801783642601000000000000000000004240000000000000B463
      046000000000A06AD460A06AD4607765006057010000512A01604C5D6064585D
      6064585D6064340052613005A060AC496A63A06AD46034005261585D60640200
      0000B05F6064791E0060585D6064B05D60640000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000776500605701
      0000CA290160205D6064585D6064A26AD460A26AD460A26AD460FC7FFF7F0318
      0460002DBA61F817836405000000E61704600000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000FF7F0000000000000000000000000000
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
      0000000000000000000000000000000000000000FF7F00000000000000000000
      0000000000000000FF7F00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      E07FE07FE07F0000000000000000000000000000FF7F00000000000000000000
      0000000000000000FF7F00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      1042104210420000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FF7F0000000000000000
      00000000FF7F0000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FF7F0000000000000000
      00000000FF7F0000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FF7F0000000000000000
      00000000FF7F0000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7F000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000FF7F00000000
      000000000000FF7F00000000000000000000000000000000FF7F000000000000
      00000000FF7F0000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000FF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000FF7F0000
      0000000000000000FF7F00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000FF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7F0000000000000000000000000000FF7F00000000
      000000000000FF7F000000000000000000000000000000000000000000000000
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
      0000000000000000000000000000000000000000000000000000000000006023
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006023
      602300000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006023
      602360230000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006023
      602360236023000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006023
      602360236023602300000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042004200420042
      0042004200420042004200420042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006023
      602360236023602360230000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000420042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006023
      602360236023602360236023000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006023
      602360236023602360236023000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006023
      602360236023602360230000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006023
      602360236023602300000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7F00000000000000000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006023
      602360236023000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7F0000FF7F000000000000000000000000000000420000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006023
      602360230000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7F00000000000000000000000000000000000000420000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006023
      6023000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006023
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000300000000100010000000000800100000000000000000000
      000000000000000000000000FFFFFF0000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000FFFEFFFF00000000C007FFFF00000000
      BFEB07C100000000000507C1000000007E3107C1000000007E35010100000000
      00060001000000007FEA0201000000008014020100000000C00A800300000000
      E001C10700000000E007C10700000000F007E38F00000000F003E38F00000000
      F803E38F00000000FFFFFFFF00000000FFFFFFFFFFFFF9FFFFFFC001FFFFF8FF
      C0078031EFFDF87FC0078031C7FFF83FC0078031C3FBF81FC0078001E3F7F80F
      C0078001F1E7F807C0078001F8CFF803C0078FF1FC1FF803C0078FF1FE3FF807
      C0078FF1FC1FF80FC0078FF1F8CFF81FC00F8FF1E1E7F83FC01F8FF5C3F3F87F
      C03F8001C7FDF8FFFFFFFFFFFFFFF9FF00000000000000000000000000000000
      000000000000}
  end
  object dsrcTAHMIN: TDataSource
    DataSet = tblTAHMIN
    Left = 668
    Top = 184
  end
  object tblTAHMIN: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'TAHMIN.db'
    Left = 700
    Top = 184
    object tblTAHMINTARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblTAHMINGAZETELER: TStringField
      FieldName = 'GAZETELER'
      Size = 35
    end
    object tblTAHMINKOSU01: TStringField
      FieldName = 'KOSU01'
      Size = 25
    end
    object tblTAHMINKOSU02: TStringField
      FieldName = 'KOSU02'
      Size = 25
    end
    object tblTAHMINKOSU03: TStringField
      FieldName = 'KOSU03'
      Size = 25
    end
    object tblTAHMINKOSU04: TStringField
      FieldName = 'KOSU04'
      Size = 25
    end
    object tblTAHMINKOSU05: TStringField
      FieldName = 'KOSU05'
      Size = 25
    end
    object tblTAHMINKOSU06: TStringField
      FieldName = 'KOSU06'
      Size = 25
    end
    object tblTAHMINKOSU07: TStringField
      FieldName = 'KOSU07'
      Size = 25
    end
    object tblTAHMINKOSU08: TStringField
      FieldName = 'KOSU08'
      Size = 25
    end
    object tblTAHMINKOSU09: TStringField
      FieldName = 'KOSU09'
      Size = 25
    end
    object tblTAHMINKOSU10: TStringField
      FieldName = 'KOSU10'
      Size = 25
    end
  end
  object dsrcGANYAN: TDataSource
    DataSet = tblGANYAN
    Left = 668
    Top = 152
  end
  object tblGANYAN: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'GANYAN.db'
    Left = 700
    Top = 152
    object tblGANYANGAZETE: TStringField
      FieldName = 'GAZETE'
      Size = 35
    end
    object tblGANYANTARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblGANYANAYAK01: TStringField
      FieldName = 'AYAK01'
      Size = 35
    end
    object tblGANYANAYAK02: TStringField
      FieldName = 'AYAK02'
      Size = 35
    end
    object tblGANYANAYAK03: TStringField
      FieldName = 'AYAK03'
      Size = 35
    end
    object tblGANYANAYAK04: TStringField
      FieldName = 'AYAK04'
      Size = 35
    end
    object tblGANYANAYAK05: TStringField
      FieldName = 'AYAK05'
      Size = 35
    end
    object tblGANYANAYAK06: TStringField
      FieldName = 'AYAK06'
      Size = 35
    end
  end
  object dsrcIKILI: TDataSource
    DataSet = tblIKILI
    Left = 668
    Top = 120
  end
  object tblIKILI: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'IKILI.db'
    Left = 700
    Top = 120
    object tblIKILIGAZETE: TStringField
      FieldName = 'GAZETE'
      Size = 35
    end
    object tblIKILITARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblIKILIIKILIKOSU: TStringField
      FieldName = 'IKILIKOSU'
      Size = 15
    end
    object tblIKILIIKILITAHMIN: TStringField
      FieldName = 'IKILITAHMIN'
      Size = 15
    end
    object tblIKILICIFTEKOSU: TStringField
      FieldName = 'CIFTEKOSU'
      Size = 15
    end
    object tblIKILICIFTETAHMIN: TStringField
      FieldName = 'CIFTETAHMIN'
      Size = 15
    end
  end
  object dsrcYARIS: TDataSource
    DataSet = tblYARIS
    Left = 668
    Top = 88
  end
  object tblYARIS: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'YARISBIL.db'
    Left = 700
    Top = 88
    object tblYARISTARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblYARISKOSU_SAYISI: TFloatField
      FieldName = 'KOSU_SAYISI'
    end
    object tblYARISBIRINCI_CIFTE: TStringField
      FieldName = 'BIRINCI_CIFTE'
      Size = 15
    end
    object tblYARISIKINCI_CIFTE: TStringField
      FieldName = 'IKINCI_CIFTE'
      Size = 15
    end
    object tblYARISUCUNCU_CIFTE: TStringField
      FieldName = 'UCUNCU_CIFTE'
      Size = 15
    end
    object tblYARISDORDUNCU_CIFTE: TStringField
      FieldName = 'DORDUNCU_CIFTE'
      Size = 15
    end
    object tblYARISALTILI_GANYAN: TFloatField
      FieldName = 'ALTILI_GANYAN'
    end
    object tblYARISUCLU_GANYAN: TFloatField
      FieldName = 'UCLU_GANYAN'
    end
    object tblYARISTABELAKOSUSU: TStringField
      FieldName = 'TABELAKOSUSU'
      Size = 15
    end
    object tblYARISALTILI_IKRAMIYE: TFloatField
      DisplayWidth = 50
      FieldName = 'ALTILI_IKRAMIYE'
      currency = True
    end
  end
  object dsrcKOSU01: TDataSource
    DataSet = tblKOSU01
    Left = 796
    Top = 64
  end
  object tblKOSU01: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'KOSU01.db'
    Left = 796
    Top = 96
    object tblKOSU01TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKOSU01KOSAN_AT_ADEDI: TFloatField
      FieldName = 'KOSAN_AT_ADEDI'
    end
    object tblKOSU01EKURI_AT: TStringField
      FieldName = 'EKURI_AT'
      Size = 15
    end
    object tblKOSU01BIRINCI: TStringField
      FieldName = 'BIRINCI'
      Size = 15
    end
    object tblKOSU01IKINCI: TStringField
      FieldName = 'IKINCI'
      Size = 15
    end
    object tblKOSU01UCUNCU: TStringField
      FieldName = 'UCUNCU'
      Size = 15
    end
    object tblKOSU01DORDUNCU: TStringField
      FieldName = 'DORDUNCU'
      Size = 15
    end
    object tblKOSU01IKILI_BAHIS: TBooleanField
      FieldName = 'IKILI_BAHIS'
    end
    object tblKOSU01UCLU_BAHIS: TBooleanField
      FieldName = 'UCLU_BAHIS'
    end
    object tblKOSU01CIKAN_ATLAR: TStringField
      FieldName = 'CIKAN_ATLAR'
      Size = 25
    end
    object tblKOSU01EFG: TStringField
      FieldName = 'EFG'
      Size = 10
    end
  end
  object dsrcSONUC: TDataSource
    DataSet = tblSONUC
    Left = 668
    Top = 56
  end
  object tblSONUC: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'SONUC.db'
    Left = 700
    Top = 56
    object tblSONUCTARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblSONUCGAZETELER: TStringField
      FieldName = 'GAZETELER'
      Size = 35
    end
    object tblSONUCGENTOP: TFloatField
      FieldName = 'GENTOP'
    end
    object tblSONUCALTILI: TFloatField
      FieldName = 'ALTILI'
    end
    object tblSONUCIKILI: TFloatField
      FieldName = 'IKILI'
    end
    object tblSONUCCITE: TFloatField
      FieldName = 'CITE'
    end
    object tblSONUCSIRALIUCLU: TFloatField
      FieldName = 'SIRALIUCLU'
    end
    object tblSONUCTABELADORTLU: TFloatField
      FieldName = 'TABELADORTLU'
    end
    object tblSONUCUCLUGANYAN: TFloatField
      FieldName = 'UCLUGANYAN'
    end
    object tblSONUCGANYANTOP: TFloatField
      FieldName = 'GANYANTOP'
    end
  end
  object dsrcKOSU02: TDataSource
    DataSet = tblKOSU02
    Left = 736
    Top = 251
  end
  object tblKOSU02: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'KOSU02.db'
    Left = 768
    Top = 251
    object tblKOSU02TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKOSU02KOSAN_AT_ADEDI: TFloatField
      FieldName = 'KOSAN_AT_ADEDI'
    end
    object tblKOSU02EKURI_AT: TStringField
      FieldName = 'EKURI_AT'
      Size = 15
    end
    object tblKOSU02BIRINCI: TStringField
      FieldName = 'BIRINCI'
      Size = 15
    end
    object tblKOSU02IKINCI: TStringField
      FieldName = 'IKINCI'
      Size = 15
    end
    object tblKOSU02UCUNCU: TStringField
      FieldName = 'UCUNCU'
      Size = 15
    end
    object tblKOSU02DORDUNCU: TStringField
      FieldName = 'DORDUNCU'
      Size = 15
    end
    object tblKOSU02IKILI_BAHIS: TBooleanField
      FieldName = 'IKILI_BAHIS'
    end
    object tblKOSU02UCLU_BAHIS: TBooleanField
      FieldName = 'UCLU_BAHIS'
    end
    object tblKOSU02CIKAN_ATLAR: TStringField
      FieldName = 'CIKAN_ATLAR'
      Size = 25
    end
    object tblKOSU02EFG: TStringField
      FieldName = 'EFG'
      Size = 10
    end
  end
  object dsrcKOSU03: TDataSource
    DataSet = tblKOSU03
    Left = 736
    Top = 219
  end
  object tblKOSU03: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'KOSU03.db'
    Left = 768
    Top = 219
    object tblKOSU03TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKOSU03KOSAN_AT_ADEDI: TFloatField
      FieldName = 'KOSAN_AT_ADEDI'
    end
    object tblKOSU03EKURI_AT: TStringField
      FieldName = 'EKURI_AT'
      Size = 15
    end
    object tblKOSU03BIRINCI: TStringField
      FieldName = 'BIRINCI'
      Size = 15
    end
    object tblKOSU03IKINCI: TStringField
      FieldName = 'IKINCI'
      Size = 15
    end
    object tblKOSU03UCUNCU: TStringField
      FieldName = 'UCUNCU'
      Size = 15
    end
    object tblKOSU03DORDUNCU: TStringField
      FieldName = 'DORDUNCU'
      Size = 15
    end
    object tblKOSU03IKILI_BAHIS: TBooleanField
      FieldName = 'IKILI_BAHIS'
    end
    object tblKOSU03UCLU_BAHIS: TBooleanField
      FieldName = 'UCLU_BAHIS'
    end
    object tblKOSU03CIKAN_ATLAR: TStringField
      FieldName = 'CIKAN_ATLAR'
      Size = 25
    end
    object tblKOSU03EFG: TStringField
      FieldName = 'EFG'
      Size = 10
    end
  end
  object dsrcKOSU04: TDataSource
    DataSet = tblKOSU04
    Left = 736
    Top = 187
  end
  object tblKOSU04: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'KOSU04.db'
    Left = 768
    Top = 187
    object tblKOSU04TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKOSU04KOSAN_AT_ADEDI: TFloatField
      FieldName = 'KOSAN_AT_ADEDI'
    end
    object tblKOSU04EKURI_AT: TStringField
      FieldName = 'EKURI_AT'
      Size = 15
    end
    object tblKOSU04BIRINCI: TStringField
      FieldName = 'BIRINCI'
      Size = 15
    end
    object tblKOSU04IKINCI: TStringField
      FieldName = 'IKINCI'
      Size = 15
    end
    object tblKOSU04UCUNCU: TStringField
      FieldName = 'UCUNCU'
      Size = 15
    end
    object tblKOSU04DORDUNCU: TStringField
      FieldName = 'DORDUNCU'
      Size = 15
    end
    object tblKOSU04IKILI_BAHIS: TBooleanField
      FieldName = 'IKILI_BAHIS'
    end
    object tblKOSU04UCLU_BAHIS: TBooleanField
      FieldName = 'UCLU_BAHIS'
    end
    object tblKOSU04CIKAN_ATLAR: TStringField
      FieldName = 'CIKAN_ATLAR'
      Size = 25
    end
    object tblKOSU04EFG: TStringField
      FieldName = 'EFG'
      Size = 10
    end
  end
  object dsrcKOSU05: TDataSource
    DataSet = tblKOSU05
    Left = 736
    Top = 155
  end
  object tblKOSU05: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'KOSU05.db'
    Left = 768
    Top = 155
    object tblKOSU05TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKOSU05KOSAN_AT_ADEDI: TFloatField
      FieldName = 'KOSAN_AT_ADEDI'
    end
    object tblKOSU05EKURI_AT: TStringField
      FieldName = 'EKURI_AT'
      Size = 15
    end
    object tblKOSU05BIRINCI: TStringField
      FieldName = 'BIRINCI'
      Size = 15
    end
    object tblKOSU05IKINCI: TStringField
      FieldName = 'IKINCI'
      Size = 15
    end
    object tblKOSU05UCUNCU: TStringField
      FieldName = 'UCUNCU'
      Size = 15
    end
    object tblKOSU05DORDUNCU: TStringField
      FieldName = 'DORDUNCU'
      Size = 15
    end
    object tblKOSU05IKILI_BAHIS: TBooleanField
      FieldName = 'IKILI_BAHIS'
    end
    object tblKOSU05UCLU_BAHIS: TBooleanField
      FieldName = 'UCLU_BAHIS'
    end
    object tblKOSU05CIKAN_ATLAR: TStringField
      FieldName = 'CIKAN_ATLAR'
      Size = 25
    end
    object tblKOSU05EFG: TStringField
      FieldName = 'EFG'
      Size = 10
    end
  end
  object dsrcKOSU06: TDataSource
    DataSet = tblKOSU06
    Left = 736
    Top = 123
  end
  object tblKOSU06: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'KOSU06.db'
    Left = 768
    Top = 123
    object tblKOSU06TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKOSU06KOSAN_AT_ADEDI: TFloatField
      FieldName = 'KOSAN_AT_ADEDI'
    end
    object tblKOSU06EKURI_AT: TStringField
      FieldName = 'EKURI_AT'
      Size = 15
    end
    object tblKOSU06BIRINCI: TStringField
      FieldName = 'BIRINCI'
      Size = 15
    end
    object tblKOSU06IKINCI: TStringField
      FieldName = 'IKINCI'
      Size = 15
    end
    object tblKOSU06UCUNCU: TStringField
      FieldName = 'UCUNCU'
      Size = 15
    end
    object tblKOSU06DORDUNCU: TStringField
      FieldName = 'DORDUNCU'
      Size = 15
    end
    object tblKOSU06IKILI_BAHIS: TBooleanField
      FieldName = 'IKILI_BAHIS'
    end
    object tblKOSU06UCLU_BAHIS: TBooleanField
      FieldName = 'UCLU_BAHIS'
    end
    object tblKOSU06CIKAN_ATLAR: TStringField
      FieldName = 'CIKAN_ATLAR'
      Size = 25
    end
    object tblKOSU06EFG: TStringField
      FieldName = 'EFG'
      Size = 10
    end
  end
  object dsrcKOSU07: TDataSource
    DataSet = tblKOSU07
    Left = 736
    Top = 91
  end
  object tblKOSU07: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'KOSU07.db'
    Left = 768
    Top = 91
    object tblKOSU07TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKOSU07KOSAN_AT_ADEDI: TFloatField
      FieldName = 'KOSAN_AT_ADEDI'
    end
    object tblKOSU07EKURI_AT: TStringField
      FieldName = 'EKURI_AT'
      Size = 15
    end
    object tblKOSU07BIRINCI: TStringField
      FieldName = 'BIRINCI'
      Size = 15
    end
    object tblKOSU07IKINCI: TStringField
      FieldName = 'IKINCI'
      Size = 15
    end
    object tblKOSU07UCUNCU: TStringField
      FieldName = 'UCUNCU'
      Size = 15
    end
    object tblKOSU07DORDUNCU: TStringField
      FieldName = 'DORDUNCU'
      Size = 15
    end
    object tblKOSU07IKILI_BAHIS: TBooleanField
      FieldName = 'IKILI_BAHIS'
    end
    object tblKOSU07UCLU_BAHIS: TBooleanField
      FieldName = 'UCLU_BAHIS'
    end
    object tblKOSU07CIKAN_ATLAR: TStringField
      FieldName = 'CIKAN_ATLAR'
      Size = 25
    end
    object tblKOSU07EFG: TStringField
      FieldName = 'EFG'
      Size = 10
    end
  end
  object dsrcKOSU08: TDataSource
    DataSet = tblKOSU08
    Left = 736
    Top = 59
  end
  object tblKOSU08: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'KOSU08.db'
    Left = 768
    Top = 59
    object tblKOSU08TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKOSU08KOSAN_AT_ADEDI: TFloatField
      FieldName = 'KOSAN_AT_ADEDI'
    end
    object tblKOSU08EKURI_AT: TStringField
      FieldName = 'EKURI_AT'
      Size = 15
    end
    object tblKOSU08BIRINCI: TStringField
      FieldName = 'BIRINCI'
      Size = 15
    end
    object tblKOSU08IKINCI: TStringField
      FieldName = 'IKINCI'
      Size = 15
    end
    object tblKOSU08UCUNCU: TStringField
      FieldName = 'UCUNCU'
      Size = 15
    end
    object tblKOSU08DORDUNCU: TStringField
      FieldName = 'DORDUNCU'
      Size = 15
    end
    object tblKOSU08IKILI_BAHIS: TBooleanField
      FieldName = 'IKILI_BAHIS'
    end
    object tblKOSU08UCLU_BAHIS: TBooleanField
      FieldName = 'UCLU_BAHIS'
    end
    object tblKOSU08CIKAN_ATLAR: TStringField
      FieldName = 'CIKAN_ATLAR'
      Size = 25
    end
    object tblKOSU08EFG: TStringField
      FieldName = 'EFG'
      Size = 10
    end
  end
  object dsrcKOSU09: TDataSource
    DataSet = tblKOSU09
    Left = 672
    Top = 251
  end
  object tblKOSU09: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'KOSU09.db'
    Left = 704
    Top = 251
    object tblKOSU09TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKOSU09KOSAN_AT_ADEDI: TFloatField
      FieldName = 'KOSAN_AT_ADEDI'
    end
    object tblKOSU09EKURI_AT: TStringField
      FieldName = 'EKURI_AT'
      Size = 15
    end
    object tblKOSU09BIRINCI: TStringField
      FieldName = 'BIRINCI'
      Size = 15
    end
    object tblKOSU09IKINCI: TStringField
      FieldName = 'IKINCI'
      Size = 15
    end
    object tblKOSU09UCUNCU: TStringField
      FieldName = 'UCUNCU'
      Size = 15
    end
    object tblKOSU09DORDUNCU: TStringField
      FieldName = 'DORDUNCU'
      Size = 15
    end
    object tblKOSU09IKILI_BAHIS: TBooleanField
      FieldName = 'IKILI_BAHIS'
    end
    object tblKOSU09UCLU_BAHIS: TBooleanField
      FieldName = 'UCLU_BAHIS'
    end
    object tblKOSU09CIKAN_ATLAR: TStringField
      FieldName = 'CIKAN_ATLAR'
      Size = 25
    end
    object tblKOSU09EFG: TStringField
      FieldName = 'EFG'
      Size = 10
    end
  end
  object dsrcKOSU10: TDataSource
    DataSet = tblKOSU10
    Left = 672
    Top = 219
  end
  object tblKOSU10: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'KOSU10.db'
    Left = 704
    Top = 219
    object tblKOSU10TARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblKOSU10KOSAN_AT_ADEDI: TFloatField
      FieldName = 'KOSAN_AT_ADEDI'
    end
    object tblKOSU10EKURI_AT: TStringField
      FieldName = 'EKURI_AT'
      Size = 15
    end
    object tblKOSU10BIRINCI: TStringField
      FieldName = 'BIRINCI'
      Size = 15
    end
    object tblKOSU10IKINCI: TStringField
      FieldName = 'IKINCI'
      Size = 15
    end
    object tblKOSU10UCUNCU: TStringField
      FieldName = 'UCUNCU'
      Size = 15
    end
    object tblKOSU10DORDUNCU: TStringField
      FieldName = 'DORDUNCU'
      Size = 15
    end
    object tblKOSU10IKILI_BAHIS: TBooleanField
      FieldName = 'IKILI_BAHIS'
    end
    object tblKOSU10UCLU_BAHIS: TBooleanField
      FieldName = 'UCLU_BAHIS'
    end
    object tblKOSU10CIKAN_ATLAR: TStringField
      FieldName = 'CIKAN_ATLAR'
      Size = 25
    end
    object tblKOSU10EFG: TStringField
      FieldName = 'EFG'
      Size = 10
    end
  end
  object queryGAZETELER: TQuery
    Active = True
    DatabaseName = 'VIDIN'
    SQL.Strings = (
      'SELECT * FROM GAZETE'
      'ORDER BY GAZETE_ADI DESC')
    Left = 672
    Top = 280
    object queryGAZETELERGAZETE_ADI: TStringField
      FieldName = 'GAZETE_ADI'
      Origin = 'VIDIN."GAZETE.DB".GAZETE_ADI'
      Size = 35
    end
    object queryGAZETELERYETKILI: TStringField
      FieldName = 'YETKILI'
      Origin = 'VIDIN."GAZETE.DB".YETKILI'
      Size = 50
    end
    object queryGAZETELERTELEFON: TStringField
      FieldName = 'TELEFON'
      Origin = 'VIDIN."GAZETE.DB".TELEFON'
      Size = 30
    end
    object queryGAZETELERFAX: TStringField
      FieldName = 'FAX'
      Origin = 'VIDIN."GAZETE.DB".FAX'
      Size = 30
    end
  end
  object querySIL: TQuery
    DatabaseName = 'VIDIN'
    Left = 704
    Top = 280
  end
  object dsrcAYARLAR: TDataSource
    DataSet = tblAYARLAR
    Left = 736
    Top = 280
  end
  object tblAYARLAR: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'ayarlar.DB'
    Left = 768
    Top = 280
    object tblAYARLARCIKARILACAKFIYAT: TFloatField
      FieldName = 'CIKARILACAKFIYAT'
    end
    object tblAYARLARVERILECEKPUAN: TFloatField
      FieldName = 'VERILECEKPUAN'
    end
    object tblAYARLARBOLUNECEKPUAN: TFloatField
      FieldName = 'BOLUNECEKPUAN'
    end
    object tblAYARLARALTILIPUAN: TFloatField
      FieldName = 'ALTILIPUAN'
    end
    object tblAYARLARIKILIPUAN: TFloatField
      FieldName = 'IKILIPUAN'
    end
    object tblAYARLARCIFTEPUAN: TFloatField
      FieldName = 'CIFTEPUAN'
    end
    object tblAYARLARSIRALIUCLUPUAN: TFloatField
      FieldName = 'SIRALIUCLUPUAN'
    end
    object tblAYARLARTABELASIRALIPUAN: TFloatField
      FieldName = 'TABELASIRALIPUAN'
    end
    object tblAYARLARTABELAKARISIKPUAN: TFloatField
      FieldName = 'TABELAKARISIKPUAN'
    end
    object tblAYARLARUCLUGANYANPUAN: TFloatField
      FieldName = 'UCLUGANYANPUAN'
    end
  end
end
