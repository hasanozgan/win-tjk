object frmJokeyIndex: TfrmJokeyIndex
  Left = 314
  Top = 194
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Jokey/Antrenör Hareket Indeksleme'
  ClientHeight = 108
  ClientWidth = 297
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
    Width = 297
    Height = 108
    TabOrder = 0
    object CGauge1: TCGauge
      Left = 59
      Top = 16
      Width = 230
      Height = 45
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindow
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ForeColor = clNavy
      ParentFont = False
    end
    object BitBtn2: TBitBtn
      Left = 213
      Top = 72
      Width = 75
      Height = 25
      Cancel = True
      Caption = 'Kapat'
      ModalResult = 2
      TabOrder = 0
      OnClick = BitBtn2Click
      Glyph.Data = {
        DE010000424DDE01000000000000760000002800000024000000120000000100
        0400000000006801000000000000000000001000000000000000000000000000
        80000080000000808000800000008000800080800000C0C0C000808080000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        333333333333333333333333000033338833333333333333333F333333333333
        0000333911833333983333333388F333333F3333000033391118333911833333
        38F38F333F88F33300003339111183911118333338F338F3F8338F3300003333
        911118111118333338F3338F833338F3000033333911111111833333338F3338
        3333F8330000333333911111183333333338F333333F83330000333333311111
        8333333333338F3333383333000033333339111183333333333338F333833333
        00003333339111118333333333333833338F3333000033333911181118333333
        33338333338F333300003333911183911183333333383338F338F33300003333
        9118333911183333338F33838F338F33000033333913333391113333338FF833
        38F338F300003333333333333919333333388333338FFF830000333333333333
        3333333333333333333888330000333333333333333333333333333333333333
        0000}
      NumGlyphs = 2
    end
    object BitBtn1: TBitBtn
      Left = 133
      Top = 72
      Width = 75
      Height = 25
      Caption = 'Baþlat'
      TabOrder = 1
      OnClick = BitBtn1Click
      Kind = bkOK
    end
    object Animate1: TAnimate
      Left = 8
      Top = 16
      Width = 48
      Height = 45
      Active = False
      CommonAVI = aviFindComputer
      StopFrame = 8
    end
  end
  object tblJOKEYANA: TTable
    DatabaseName = 'VIDIN'
    TableName = 'jokeyana.DB'
    Left = 304
    Top = 72
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
  object queryJOKEYHAR: TQuery
    Active = True
    DatabaseName = 'VIDIN'
    SQL.Strings = (
      'SELECT * FROM JOKEYHAR'
      'WHERE JOKEY=:JOKEY')
    Left = 304
    Top = 40
    ParamData = <
      item
        DataType = ftString
        Name = 'JOKEY'
        ParamType = ptUnknown
      end>
    object queryJOKEYHARREFERANS: TStringField
      FieldName = 'REFERANS'
      Origin = 'VIDIN."JOKEYHAR.DB".REFERANS'
      Size = 50
    end
    object queryJOKEYHARTARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'VIDIN."JOKEYHAR.DB".TARIH'
    end
    object queryJOKEYHARPIST: TStringField
      FieldName = 'PIST'
      Origin = 'VIDIN."JOKEYHAR.DB".PIST'
      Size = 30
    end
    object queryJOKEYHARKACINCI: TFloatField
      FieldName = 'KACINCI'
      Origin = 'VIDIN."JOKEYHAR.DB".KACINCI'
    end
    object queryJOKEYHARJOKEY: TStringField
      FieldName = 'JOKEY'
      Origin = 'VIDIN."JOKEYHAR.DB".JOKEY'
      Size = 35
    end
    object queryJOKEYHARANTRENOR: TStringField
      FieldName = 'ANTRENOR'
      Origin = 'VIDIN."JOKEYHAR.DB".ANTRENOR'
      Size = 35
    end
    object queryJOKEYHARISARETLE: TBooleanField
      FieldName = 'ISARETLE'
      Origin = 'VIDIN."JOKEYHAR.DB".ISARETLE'
    end
  end
  object queryJOKEYKACINCI: TQuery
    DatabaseName = 'VIDIN'
    SQL.Strings = (
      'SELECT * FROM JOKEYHAR'
      'WHERE (JOKEY=:JOKEY  AND KACINCI=1)')
    Left = 304
    Top = 8
    ParamData = <
      item
        DataType = ftString
        Name = 'JOKEY'
        ParamType = ptUnknown
      end>
    object StringField1: TStringField
      FieldName = 'REFERANS'
      Origin = 'VIDIN."JOKEYHAR.DB".REFERANS'
      Size = 50
    end
    object DateField1: TDateField
      FieldName = 'TARIH'
      Origin = 'VIDIN."JOKEYHAR.DB".TARIH'
    end
    object StringField2: TStringField
      FieldName = 'PIST'
      Origin = 'VIDIN."JOKEYHAR.DB".PIST'
      Size = 30
    end
    object FloatField1: TFloatField
      FieldName = 'KACINCI'
      Origin = 'VIDIN."JOKEYHAR.DB".KACINCI'
    end
    object StringField3: TStringField
      FieldName = 'JOKEY'
      Origin = 'VIDIN."JOKEYHAR.DB".JOKEY'
      Size = 35
    end
    object StringField4: TStringField
      FieldName = 'ANTRENOR'
      Origin = 'VIDIN."JOKEYHAR.DB".ANTRENOR'
      Size = 35
    end
    object BooleanField1: TBooleanField
      FieldName = 'ISARETLE'
      Origin = 'VIDIN."JOKEYHAR.DB".ISARETLE'
    end
  end
  object queryANTRENORKACINCI: TQuery
    Active = True
    DatabaseName = 'VIDIN'
    SQL.Strings = (
      'SELECT * FROM JOKEYHAR'
      'WHERE (ANTRENOR=:ANTRENOR  AND KACINCI=1)')
    Left = 336
    Top = 8
    ParamData = <
      item
        DataType = ftString
        Name = 'ANTRENOR'
        ParamType = ptUnknown
      end>
    object queryANTRENORKACINCIStringField5: TStringField
      FieldName = 'REFERANS'
      Origin = 'VIDIN."JOKEYHAR.DB".REFERANS'
      Size = 50
    end
    object queryANTRENORKACINCIDateField2: TDateField
      FieldName = 'TARIH'
      Origin = 'VIDIN."JOKEYHAR.DB".TARIH'
    end
    object queryANTRENORKACINCIStringField6: TStringField
      FieldName = 'PIST'
      Origin = 'VIDIN."JOKEYHAR.DB".PIST'
      Size = 30
    end
    object queryANTRENORKACINCIFloatField2: TFloatField
      FieldName = 'KACINCI'
      Origin = 'VIDIN."JOKEYHAR.DB".KACINCI'
    end
    object queryANTRENORKACINCIStringField7: TStringField
      FieldName = 'JOKEY'
      Origin = 'VIDIN."JOKEYHAR.DB".JOKEY'
      Size = 35
    end
    object queryANTRENORKACINCIStringField8: TStringField
      FieldName = 'ANTRENOR'
      Origin = 'VIDIN."JOKEYHAR.DB".ANTRENOR'
      Size = 35
    end
    object queryANTRENORKACINCIBooleanField2: TBooleanField
      FieldName = 'ISARETLE'
      Origin = 'VIDIN."JOKEYHAR.DB".ISARETLE'
    end
  end
  object queryANTRENORHAR: TQuery
    Active = True
    DatabaseName = 'VIDIN'
    SQL.Strings = (
      'SELECT * FROM JOKEYHAR'
      'WHERE ANTRENOR=:ANTRENOR')
    Left = 336
    Top = 40
    ParamData = <
      item
        DataType = ftString
        Name = 'ANTRENOR'
        ParamType = ptUnknown
      end>
    object StringField9: TStringField
      FieldName = 'REFERANS'
      Origin = 'VIDIN."JOKEYHAR.DB".REFERANS'
      Size = 50
    end
    object DateField3: TDateField
      FieldName = 'TARIH'
      Origin = 'VIDIN."JOKEYHAR.DB".TARIH'
    end
    object StringField10: TStringField
      FieldName = 'PIST'
      Origin = 'VIDIN."JOKEYHAR.DB".PIST'
      Size = 30
    end
    object FloatField3: TFloatField
      FieldName = 'KACINCI'
      Origin = 'VIDIN."JOKEYHAR.DB".KACINCI'
    end
    object StringField11: TStringField
      FieldName = 'JOKEY'
      Origin = 'VIDIN."JOKEYHAR.DB".JOKEY'
      Size = 35
    end
    object StringField12: TStringField
      FieldName = 'ANTRENOR'
      Origin = 'VIDIN."JOKEYHAR.DB".ANTRENOR'
      Size = 35
    end
    object BooleanField3: TBooleanField
      FieldName = 'ISARETLE'
      Origin = 'VIDIN."JOKEYHAR.DB".ISARETLE'
    end
  end
end
