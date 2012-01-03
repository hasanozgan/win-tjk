object frmAntrenorListesi: TfrmAntrenorListesi
  Left = 303
  Top = 187
  BorderIcons = [biSystemMenu]
  BorderStyle = bsDialog
  Caption = 'Jokey Listele'
  ClientHeight = 225
  ClientWidth = 281
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
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 281
    Height = 225
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 16
      Width = 48
      Height = 13
      Caption = 'Kayýt Türü'
    end
    object Label2: TLabel
      Left = 128
      Top = 16
      Width = 85
      Height = 13
      Caption = 'Kaydýn Adý Soyadý'
    end
    object ComboBox1: TComboBox
      Left = 8
      Top = 32
      Width = 113
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 0
      OnChange = ComboBox1Change
      Items.Strings = (
        'JOKEY'
        'ANTRENOR')
    end
    object Edit1: TEdit
      Left = 128
      Top = 32
      Width = 145
      Height = 21
      TabOrder = 1
      OnChange = Edit1Change
    end
    object DBGrid1: TDBGrid
      Left = 8
      Top = 56
      Width = 265
      Height = 161
      DataSource = dsrcJOKEYANA
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
      TabOrder = 2
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
          Width = 100
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'ADISOYADI'
          Title.Alignment = taCenter
          Title.Caption = 'Adý Soyadý'
          Width = 130
          Visible = True
        end>
    end
  end
  object dsrcJOKEYANA: TDataSource
    DataSet = queryJOKEYANA
    Left = 16
    Top = 184
  end
  object queryJOKEYANA: TQuery
    Active = True
    DatabaseName = 'VIDIN'
    SQL.Strings = (
      'SELECT * FROM JOKEYANA'
      'WHERE (KAYITTURU LIKE :KAYITTURU AND ADISOYADI LIKE :ADISOYADI)')
    Left = 48
    Top = 184
    ParamData = <
      item
        DataType = ftString
        Name = 'KAYITTURU'
        ParamType = ptUnknown
      end
      item
        DataType = ftString
        Name = 'ADISOYADI'
        ParamType = ptUnknown
      end>
    object queryJOKEYANAREFERANS: TIntegerField
      FieldName = 'REFERANS'
      Origin = 'VIDIN."jokeyana.DB".REFERANS'
    end
    object queryJOKEYANAADISOYADI: TStringField
      FieldName = 'ADISOYADI'
      Origin = 'VIDIN."jokeyana.DB".ADISOYADI'
      Size = 40
    end
    object queryJOKEYANAKAYITTURU: TStringField
      FieldName = 'KAYITTURU'
      Origin = 'VIDIN."jokeyana.DB".KAYITTURU'
      Size = 25
    end
    object queryJOKEYANADEVIRBIRINCILIGI: TFloatField
      FieldName = 'DEVIRBIRINCILIGI'
      Origin = 'VIDIN."jokeyana.DB".DEVIRBIRINCILIGI'
    end
    object queryJOKEYANADEVIRTOPLAMKOSU: TFloatField
      FieldName = 'DEVIRTOPLAMKOSU'
      Origin = 'VIDIN."jokeyana.DB".DEVIRTOPLAMKOSU'
    end
    object queryJOKEYANATOPLAMKOSU: TFloatField
      FieldName = 'TOPLAMKOSU'
      Origin = 'VIDIN."jokeyana.DB".TOPLAMKOSU'
    end
    object queryJOKEYANATOPLAMBIRINCI: TFloatField
      FieldName = 'TOPLAMBIRINCI'
      Origin = 'VIDIN."jokeyana.DB".TOPLAMBIRINCI'
    end
    object queryJOKEYANAKOSTUGUYER: TStringField
      FieldName = 'KOSTUGUYER'
      Origin = 'VIDIN."jokeyana.DB".KOSTUGUYER'
      Size = 25
    end
    object queryJOKEYANAKOSUTOPLAMI: TFloatField
      FieldName = 'KOSUTOPLAMI'
      Origin = 'VIDIN."jokeyana.DB".KOSUTOPLAMI'
    end
    object queryJOKEYANABIRINCI: TFloatField
      FieldName = 'BIRINCI'
      Origin = 'VIDIN."jokeyana.DB".BIRINCI'
    end
    object queryJOKEYANAIKINCI: TFloatField
      FieldName = 'IKINCI'
      Origin = 'VIDIN."jokeyana.DB".IKINCI'
    end
    object queryJOKEYANAUCUNCU: TFloatField
      FieldName = 'UCUNCU'
      Origin = 'VIDIN."jokeyana.DB".UCUNCU'
    end
    object queryJOKEYANADORDUNCU: TFloatField
      FieldName = 'DORDUNCU'
      Origin = 'VIDIN."jokeyana.DB".DORDUNCU'
    end
    object queryJOKEYANAIKILIYUZDESI: TSmallintField
      FieldName = 'IKILIYUZDESI'
      Origin = 'VIDIN."jokeyana.DB".IKILIYUZDESI'
    end
    object queryJOKEYANASONONYARISI: TStringField
      FieldName = 'SONONYARISI'
      Origin = 'VIDIN."jokeyana.DB".SONONYARISI'
      Size = 15
    end
  end
end
