object frmTabloGoruntule: TfrmTabloGoruntule
  Left = 323
  Top = 318
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Kazanç Tablosu'
  ClientHeight = 153
  ClientWidth = 273
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
    Width = 273
    Height = 153
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 16
      Width = 75
      Height = 13
      Caption = 'Baþlangýç Tarihi'
    end
    object Label2: TLabel
      Left = 144
      Top = 16
      Width = 48
      Height = 13
      Caption = 'Bitiþ Tarihi'
    end
    object Label3: TLabel
      Left = 72
      Top = 64
      Width = 58
      Height = 13
      Caption = 'Koþulan Pist'
    end
    object Bevel1: TBevel
      Left = 0
      Top = 89
      Width = 273
      Height = 2
    end
    object SpeedButton1: TSpeedButton
      Left = 238
      Top = 99
      Width = 29
      Height = 46
      Enabled = False
      Flat = True
      Glyph.Data = {
        36030000424D3603000000000000360000002800000010000000100000000100
        1800000000000003000000000000000000000000000000000000FF00FFFF00FF
        FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00
        FFFF00FFFF00FFFFFFFFFF00FFFF00FF00000000000000000000000000000000
        0000000000000000000000000000000000FF00FFFF00FFFF00FFFF00FF000000
        FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF000000FF00
        FF000000FF00FFFF00FF00000000000000000000000000000000000000000000
        0000000000000000000000000000000000FF00FF000000FF00FF000000FF00FF
        FF00FFFF00FFFF00FFFF00FFFF00FF00FFFF00FFFF00FFFFFF00FFFF00FF0000
        00000000000000FF00FF000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FF80
        8080808080808080FF00FFFF00FF000000FF00FF000000FF00FF000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        00FF00FFFF00FF000000000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FF000000FF00FF000000FF00FF000000FF00FF000000
        000000000000000000000000000000000000000000000000000000FF00FF0000
        00FF00FF000000000000FF00FFFF00FF000000FFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFF000000FF00FF000000FF00FF000000FF00FFFF00FF
        FF00FF000000FFFFFF000000000000000000000000000000FFFFFF0000000000
        00000000000000FF00FFFF00FFFF00FFFF00FF000000FFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFF000000FF00FFFF00FFFF00FFFF00FFFF00FF
        FF00FFFF00FF000000FFFFFF000000000000000000000000000000FFFFFF0000
        00FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF000000FFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF000000FF00FFFF00FFFF00FFFF00FF
        FF00FFFF00FFFF00FF0000000000000000000000000000000000000000000000
        00000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF}
      OnClick = SpeedButton1Click
    end
    object SpeedButton2: TSpeedButton
      Left = 64
      Top = 99
      Width = 169
      Height = 23
      Caption = 'Baþlat'
      Flat = True
      OnClick = SpeedButton2Click
    end
    object Label5: TLabel
      Left = 304
      Top = 104
      Width = 25
      Height = 9
      AutoSize = False
    end
    object ProgressBar1: TProgressBar
      Left = 64
      Top = 121
      Width = 169
      Height = 21
      Hint = 'Merhaba'
      Min = 0
      Max = 100
      ParentShowHint = False
      Smooth = True
      ShowHint = True
      TabOrder = 4
    end
    object datetimecomboBASLANGIC: TDateTimePicker
      Left = 8
      Top = 32
      Width = 121
      Height = 21
      CalAlignment = dtaLeft
      Date = 37156.5153034722
      Time = 37156.5153034722
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 0
      OnChange = datetimecomboBASLANGICChange
    end
    object datetimecomboBITIS: TDateTimePicker
      Left = 144
      Top = 32
      Width = 121
      Height = 21
      CalAlignment = dtaLeft
      Date = 37156.5155424769
      Time = 37156.5155424769
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 1
      OnChange = datetimecomboBITISChange
    end
    object comboPIST: TComboBox
      Left = 144
      Top = 64
      Width = 121
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 2
      OnChange = comboPISTChange
    end
    object Animate1: TAnimate
      Left = 9
      Top = 99
      Width = 48
      Height = 45
      Active = False
      CommonAVI = aviFindComputer
      StopFrame = 8
    end
  end
  object queryLISTELE: TQuery
    DatabaseName = 'VIDIN'
    SQL.Strings = (
      'SELECT * FROM JOKEYHAR'
      'WHERE (TARIH >= :BASTARIH AND TARIH <= :BITTARIH) AND PIST=:PIST'
      'ORDER  BY REFERANS')
    Left = 280
    Top = 32
    ParamData = <
      item
        DataType = ftDate
        Name = 'BASTARIH'
        ParamType = ptUnknown
      end
      item
        DataType = ftDate
        Name = 'BITTARIH'
        ParamType = ptUnknown
      end
      item
        DataType = ftString
        Name = 'PIST'
        ParamType = ptUnknown
      end>
    object queryLISTELEREFERANS: TStringField
      FieldName = 'REFERANS'
      Origin = 'VIDIN."JOKEYHAR.DB".REFERANS'
      Size = 50
    end
    object queryLISTELETARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'VIDIN."JOKEYHAR.DB".TARIH'
    end
    object queryLISTELEPIST: TStringField
      FieldName = 'PIST'
      Origin = 'VIDIN."JOKEYHAR.DB".PIST'
      Size = 30
    end
    object queryLISTELEKACINCI: TFloatField
      FieldName = 'KACINCI'
      Origin = 'VIDIN."JOKEYHAR.DB".KACINCI'
    end
    object queryLISTELEJOKEY: TStringField
      FieldName = 'JOKEY'
      Origin = 'VIDIN."JOKEYHAR.DB".JOKEY'
      Size = 35
    end
    object queryLISTELEANTRENOR: TStringField
      FieldName = 'ANTRENOR'
      Origin = 'VIDIN."JOKEYHAR.DB".ANTRENOR'
      Size = 35
    end
  end
  object tblJOKEYANA: TTable
    DatabaseName = 'VIDIN'
    TableName = 'jokeyana.DB'
    Left = 280
    object tblJOKEYANAREFERANS: TAutoIncField
      FieldName = 'REFERANS'
      ReadOnly = True
    end
    object tblJOKEYANAADISOYADI: TStringField
      FieldName = 'ADISOYADI'
      Size = 40
    end
    object tblJOKEYANAKAYITTURU: TStringField
      FieldName = 'KAYITTURU'
      Size = 25
    end
    object tblJOKEYANADEVIRBIRINCILIGI: TFloatField
      FieldName = 'DEVIRBIRINCILIGI'
    end
    object tblJOKEYANADEVIRTOPLAMKOSU: TFloatField
      FieldName = 'DEVIRTOPLAMKOSU'
    end
    object tblJOKEYANATOPLAMKOSU: TFloatField
      FieldName = 'TOPLAMKOSU'
    end
    object tblJOKEYANATOPLAMBIRINCI: TFloatField
      FieldName = 'TOPLAMBIRINCI'
    end
    object tblJOKEYANAKOSTUGUYER: TStringField
      FieldName = 'KOSTUGUYER'
      Size = 25
    end
    object tblJOKEYANAKOSUTOPLAMI: TFloatField
      FieldName = 'KOSUTOPLAMI'
    end
    object tblJOKEYANABIRINCI: TFloatField
      FieldName = 'BIRINCI'
    end
    object tblJOKEYANAIKINCI: TFloatField
      FieldName = 'IKINCI'
    end
    object tblJOKEYANAUCUNCU: TFloatField
      FieldName = 'UCUNCU'
    end
    object tblJOKEYANADORDUNCU: TFloatField
      FieldName = 'DORDUNCU'
    end
    object tblJOKEYANAIKILIYUZDESI: TSmallintField
      FieldName = 'IKILIYUZDESI'
    end
    object tblJOKEYANASONONYARISI: TStringField
      FieldName = 'SONONYARISI'
      Size = 15
    end
    object tblJOKEYANATERFI: TBooleanField
      FieldName = 'TERFI'
    end
  end
  object queryATSORGUSU: TQuery
    DatabaseName = 'VIDIN'
    SQL.Strings = (
      'SELECT * FROM JOKEYANA'
      'WHERE (ADISOYADI LIKE :ADISOYADI AND KAYITTURU LIKE :KAYITTURU)')
    Left = 312
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
    object queryATSORGUSUREFERANS: TIntegerField
      FieldName = 'REFERANS'
      Origin = 'VIDIN."jokeyana.DB".REFERANS'
    end
    object queryATSORGUSUADISOYADI: TStringField
      FieldName = 'ADISOYADI'
      Origin = 'VIDIN."jokeyana.DB".ADISOYADI'
      Size = 40
    end
    object queryATSORGUSUKAYITTURU: TStringField
      FieldName = 'KAYITTURU'
      Origin = 'VIDIN."jokeyana.DB".KAYITTURU'
      Size = 25
    end
    object queryATSORGUSUDEVIRBIRINCILIGI: TFloatField
      FieldName = 'DEVIRBIRINCILIGI'
      Origin = 'VIDIN."jokeyana.DB".DEVIRBIRINCILIGI'
    end
    object queryATSORGUSUDEVIRTOPLAMKOSU: TFloatField
      FieldName = 'DEVIRTOPLAMKOSU'
      Origin = 'VIDIN."jokeyana.DB".DEVIRTOPLAMKOSU'
    end
    object queryATSORGUSUTOPLAMKOSU: TFloatField
      FieldName = 'TOPLAMKOSU'
      Origin = 'VIDIN."jokeyana.DB".TOPLAMKOSU'
    end
    object queryATSORGUSUTOPLAMBIRINCI: TFloatField
      FieldName = 'TOPLAMBIRINCI'
      Origin = 'VIDIN."jokeyana.DB".TOPLAMBIRINCI'
    end
    object queryATSORGUSUKOSTUGUYER: TStringField
      FieldName = 'KOSTUGUYER'
      Origin = 'VIDIN."jokeyana.DB".KOSTUGUYER'
      Size = 25
    end
    object queryATSORGUSUKOSUTOPLAMI: TFloatField
      FieldName = 'KOSUTOPLAMI'
      Origin = 'VIDIN."jokeyana.DB".KOSUTOPLAMI'
    end
    object queryATSORGUSUBIRINCI: TFloatField
      FieldName = 'BIRINCI'
      Origin = 'VIDIN."jokeyana.DB".BIRINCI'
    end
    object queryATSORGUSUIKINCI: TFloatField
      FieldName = 'IKINCI'
      Origin = 'VIDIN."jokeyana.DB".IKINCI'
    end
    object queryATSORGUSUUCUNCU: TFloatField
      FieldName = 'UCUNCU'
      Origin = 'VIDIN."jokeyana.DB".UCUNCU'
    end
    object queryATSORGUSUDORDUNCU: TFloatField
      FieldName = 'DORDUNCU'
      Origin = 'VIDIN."jokeyana.DB".DORDUNCU'
    end
    object queryATSORGUSUIKILIYUZDESI: TSmallintField
      FieldName = 'IKILIYUZDESI'
      Origin = 'VIDIN."jokeyana.DB".IKILIYUZDESI'
    end
    object queryATSORGUSUSONONYARISI: TStringField
      FieldName = 'SONONYARISI'
      Origin = 'VIDIN."jokeyana.DB".SONONYARISI'
      Size = 15
    end
    object queryATSORGUSUTERFI: TBooleanField
      FieldName = 'TERFI'
      Origin = 'VIDIN."JOKEYANA.DB".TERFI'
    end
  end
end
