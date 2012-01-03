object frmJokeyListesi: TfrmJokeyListesi
  Left = 422
  Top = 262
  BorderIcons = [biSystemMenu]
  BorderStyle = bsDialog
  Caption = 'Jokey Listesi'
  ClientHeight = 209
  ClientWidth = 257
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 257
    Height = 209
    TabOrder = 0
    object DBGrid1: TDBGrid
      Left = 8
      Top = 40
      Width = 241
      Height = 161
      DataSource = dsrcJOKEYLIST
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
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
          FieldName = 'KAYITTURU'
          Title.Alignment = taCenter
          Title.Caption = 'Kayýt Türü'
          Width = 80
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'ADISOYADI'
          Title.Alignment = taCenter
          Title.Caption = 'Jokey Adý Soyadý'
          Width = 125
          Visible = True
        end>
    end
    object Edit1: TEdit
      Left = 8
      Top = 16
      Width = 241
      Height = 21
      TabOrder = 1
      OnChange = Edit1Change
    end
  end
  object dsrcJOKEYLIST: TDataSource
    DataSet = queryJOKEYLIST
    Left = 184
    Top = 80
  end
  object queryJOKEYLIST: TQuery
    DatabaseName = 'VIDIN'
    FilterOptions = [foCaseInsensitive]
    SQL.Strings = (
      'SELECT * FROM JOKEYANA'
      'WHERE (ADISOYADI LIKE :ADISOYADI AND KAYITTURU LIKE :KAYITTURU)')
    Left = 216
    Top = 80
    ParamData = <
      item
        DataType = ftString
        Name = 'ADISOYADI'
        ParamType = ptUnknown
      end
      item
        DataType = ftString
        Name = 'KAYITTURU'
        ParamType = ptUnknown
      end>
    object queryJOKEYLISTREFERANS: TIntegerField
      FieldName = 'REFERANS'
      Origin = 'VIDIN."jokeyana.DB".REFERANS'
    end
    object queryJOKEYLISTADISOYADI: TStringField
      FieldName = 'ADISOYADI'
      Origin = 'VIDIN."jokeyana.DB".ADISOYADI'
      Size = 40
    end
    object queryJOKEYLISTKAYITTURU: TStringField
      FieldName = 'KAYITTURU'
      Origin = 'VIDIN."jokeyana.DB".KAYITTURU'
      Size = 25
    end
    object queryJOKEYLISTDEVIRBIRINCILIGI: TFloatField
      FieldName = 'DEVIRBIRINCILIGI'
      Origin = 'VIDIN."jokeyana.DB".DEVIRBIRINCILIGI'
    end
    object queryJOKEYLISTDEVIRTOPLAMKOSU: TFloatField
      FieldName = 'DEVIRTOPLAMKOSU'
      Origin = 'VIDIN."jokeyana.DB".DEVIRTOPLAMKOSU'
    end
    object queryJOKEYLISTKOSTUGUYER: TStringField
      FieldName = 'KOSTUGUYER'
      Origin = 'VIDIN."jokeyana.DB".KOSTUGUYER'
      Size = 25
    end
    object queryJOKEYLISTKOSUTOPLAMI: TFloatField
      FieldName = 'KOSUTOPLAMI'
      Origin = 'VIDIN."jokeyana.DB".KOSUTOPLAMI'
    end
    object queryJOKEYLISTBIRINCI: TFloatField
      FieldName = 'BIRINCI'
      Origin = 'VIDIN."jokeyana.DB".BIRINCI'
    end
    object queryJOKEYLISTIKINCI: TFloatField
      FieldName = 'IKINCI'
      Origin = 'VIDIN."jokeyana.DB".IKINCI'
    end
    object queryJOKEYLISTUCUNCU: TFloatField
      FieldName = 'UCUNCU'
      Origin = 'VIDIN."jokeyana.DB".UCUNCU'
    end
    object queryJOKEYLISTDORDUNCU: TFloatField
      FieldName = 'DORDUNCU'
      Origin = 'VIDIN."jokeyana.DB".DORDUNCU'
    end
    object queryJOKEYLISTIKILIYUZDESI: TSmallintField
      FieldName = 'IKILIYUZDESI'
      Origin = 'VIDIN."jokeyana.DB".IKILIYUZDESI'
    end
    object queryJOKEYLISTSONONYARISI: TStringField
      FieldName = 'SONONYARISI'
      Origin = 'VIDIN."jokeyana.DB".SONONYARISI'
      Size = 15
    end
    object queryJOKEYLISTTOPLAMKOSU: TFloatField
      FieldName = 'TOPLAMKOSU'
      Origin = 'VIDIN."JOKEYANA.DB".TOPLAMKOSU'
    end
    object queryJOKEYLISTTOPLAMBIRINCI: TFloatField
      FieldName = 'TOPLAMBIRINCI'
      Origin = 'VIDIN."JOKEYANA.DB".TOPLAMBIRINCI'
    end
    object queryJOKEYLISTTERFI: TBooleanField
      FieldName = 'TERFI'
      Origin = 'VIDIN."JOKEYANA.DB".TERFI'
    end
  end
end
