object frmAtListesi: TfrmAtListesi
  Left = 438
  Top = 106
  BorderStyle = bsDialog
  Caption = 'Atlarýn Listesi'
  ClientHeight = 257
  ClientWidth = 281
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
    Top = 0
    Width = 281
    Height = 257
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 11
      Width = 43
      Height = 13
      Caption = 'Atýn Cinsi'
    end
    object Label2: TLabel
      Left = 128
      Top = 11
      Width = 36
      Height = 13
      Caption = 'Atýn Adý'
    end
    object DBGrid1: TDBGrid
      Left = 8
      Top = 56
      Width = 265
      Height = 193
      DataSource = dsrcATLISTESI
      Options = [dgTitles, dgIndicator, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      OnCellClick = DBGrid1CellClick
      Columns = <
        item
          Expanded = False
          FieldName = 'CINSI'
          Title.Alignment = taCenter
          Title.Caption = 'Atýn Cinsi'
          Width = 97
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'ATIN_ADI'
          Title.Alignment = taCenter
          Title.Caption = 'Atýn Adý'
          Width = 134
          Visible = True
        end>
    end
    object ComboBox1: TComboBox
      Left = 8
      Top = 27
      Width = 113
      Height = 21
      ItemHeight = 13
      TabOrder = 1
      OnChange = ComboBox1Change
      Items.Strings = (
        'ÝNGÝLÝZ'
        'ARAP')
    end
    object Edit1: TEdit
      Left = 128
      Top = 27
      Width = 145
      Height = 21
      TabOrder = 2
      OnChange = Edit1Change
    end
  end
  object dsrcATLISTESI: TDataSource
    DataSet = queryATLISTESI
    Left = 288
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
    Left = 288
    Top = 32
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
end
