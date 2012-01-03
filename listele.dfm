object frmListele: TfrmListele
  Left = 198
  Top = 105
  BorderIcons = [biSystemMenu]
  BorderStyle = bsDialog
  Caption = 'Jokey, Apranti ve Antrenör Listesi'
  ClientHeight = 321
  ClientWidth = 561
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
    Top = 32
    Width = 561
    Height = 289
    TabOrder = 0
    object PageControl1: TPageControl
      Left = 8
      Top = 16
      Width = 545
      Height = 265
      ActivePage = TabSheet1
      TabOrder = 0
      object TabSheet1: TTabSheet
        Caption = 'Jokeyler'
        object DBGrid1: TDBGrid
          Left = 0
          Top = 4
          Width = 537
          Height = 233
          DataSource = dsrcJOKEY
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          Columns = <
            item
              Expanded = False
              FieldName = 'ADISOYADI'
              Title.Alignment = taCenter
              Title.Caption = 'Adý Soyadý'
              Width = 113
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'KOSUTOPLAMI'
              Title.Alignment = taCenter
              Title.Caption = 'Koþu Top.'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'BIRINCI'
              Title.Alignment = taCenter
              Title.Caption = 'Birinci'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'IKINCI'
              Title.Alignment = taCenter
              Title.Caption = 'Ikinci'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'UCUNCU'
              Title.Alignment = taCenter
              Title.Caption = 'Üçüncü'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'DORDUNCU'
              Title.Alignment = taCenter
              Title.Caption = 'Dördüncü'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'IKILIYUZDESI'
              Title.Alignment = taCenter
              Title.Caption = 'Yüzdesi'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'SONONYARISI'
              Title.Alignment = taCenter
              Title.Caption = 'Son 10 Yarýþ'
              Width = 70
              Visible = True
            end>
        end
      end
      object TabSheet2: TTabSheet
        Caption = 'Aprantiler'
        ImageIndex = 1
        object DBGrid2: TDBGrid
          Left = 0
          Top = 4
          Width = 537
          Height = 233
          DataSource = dsrcAPRANTI
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          Columns = <
            item
              Expanded = False
              FieldName = 'ADISOYADI'
              Title.Alignment = taCenter
              Title.Caption = 'Adý Soyadý'
              Width = 113
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'KOSUTOPLAMI'
              Title.Alignment = taCenter
              Title.Caption = 'Koþu Top.'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'BIRINCI'
              Title.Alignment = taCenter
              Title.Caption = 'Birinci'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'IKINCI'
              Title.Alignment = taCenter
              Title.Caption = 'Ikinci'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'UCUNCU'
              Title.Alignment = taCenter
              Title.Caption = 'Üçüncü'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'DORDUNCU'
              Title.Alignment = taCenter
              Title.Caption = 'Dördüncü'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'IKILIYUZDESI'
              Title.Alignment = taCenter
              Title.Caption = 'Yüzdesi'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'SONONYARISI'
              Title.Alignment = taCenter
              Title.Caption = 'Son 10 Yarýþ'
              Width = 70
              Visible = True
            end>
        end
      end
      object TabSheet3: TTabSheet
        Caption = 'Antrenörler'
        ImageIndex = 2
        object DBGrid3: TDBGrid
          Left = 0
          Top = 4
          Width = 537
          Height = 233
          DataSource = dsrcANTRENOR
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          Columns = <
            item
              Expanded = False
              FieldName = 'ADISOYADI'
              Title.Alignment = taCenter
              Title.Caption = 'Adý Soyadý'
              Width = 113
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'KOSUTOPLAMI'
              Title.Alignment = taCenter
              Title.Caption = 'Koþu Top.'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'BIRINCI'
              Title.Alignment = taCenter
              Title.Caption = 'Birinci'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'IKINCI'
              Title.Alignment = taCenter
              Title.Caption = 'Ikinci'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'UCUNCU'
              Title.Alignment = taCenter
              Title.Caption = 'Üçüncü'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'DORDUNCU'
              Title.Alignment = taCenter
              Title.Caption = 'Dördüncü'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'IKILIYUZDESI'
              Title.Alignment = taCenter
              Title.Caption = 'Yüzdesi'
              Width = 52
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'SONONYARISI'
              Title.Alignment = taCenter
              Title.Caption = 'Son 10 Yarýþ'
              Width = 70
              Visible = True
            end>
        end
      end
    end
  end
  object CoolBar1: TCoolBar
    Left = 0
    Top = 0
    Width = 561
    Height = 41
    Bands = <>
    object SpeedButton1: TSpeedButton
      Left = 8
      Top = 4
      Width = 113
      Height = 29
      Caption = 'Dosyaya Gönder'
      Flat = True
      Glyph.Data = {
        36030000424D3603000000000000360000002800000010000000100000000100
        1800000000000003000000000000000000000000000000000000FF00FFFF00FF
        FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00
        FFFF00FFFF00FFFF00FFFF00FFFF00FF00000000000000000000000000000000
        0000000000000000000000000000000000000000000000FF00FFFF00FF000000
        008080008080000000000000000000000000000000000000FF00FFFF00FF0000
        00008080000000FF00FFFF00FF00000000808000808000000000000000000000
        0000000000000000FF00FFFF00FF000000008080000000FF00FFFF00FF000000
        008080008080000000000000000000000000000000000000FF00FFFF00FF0000
        00008080000000FF00FFFF00FF00000000808000808000000000000000000000
        0000000000000000000000000000000000008080000000FF00FFFF00FF000000
        0080800080800080800080800080800080800080800080800080800080800080
        80008080000000FF00FFFF00FF00000000808000808000000000000000000000
        0000000000000000000000000000008080008080000000FF00FFFF00FF000000
        008080000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF0000
        00008080000000FF00FFFF00FF000000008080000000FF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FF000000008080000000FF00FFFF00FF000000
        008080000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF0000
        00008080000000FF00FFFF00FF000000008080000000FF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FF000000008080000000FF00FFFF00FF000000
        008080000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF0000
        00000000000000FF00FFFF00FF000000008080000000FF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FF000000FF00FF000000FF00FFFF00FF000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF}
      OnClick = SpeedButton1Click
    end
  end
  object dsrcJOKEY: TDataSource
    DataSet = queryJOKEY
    Left = 464
    Top = 360
  end
  object queryJOKEY: TQuery
    Active = True
    DatabaseName = 'VIDIN'
    Constrained = True
    SQL.Strings = (
      'SELECT * FROM JOKEYANA'
      
        'WHERE (KAYITTURU='#39'JOKEY'#39' AND ((DEVIRBIRINCILIGI+TOPLAMBIRINCI) >' +
        '= :SINIR OR TERFI = TRUE))'
      
        'ORDER BY BIRINCI DESC, IKINCI DESC, UCUNCU DESC, DORDUNCU DESC, ' +
        'IKILIYUZDESI DESC, KOSUTOPLAMI DESC')
    Left = 464
    Top = 328
    ParamData = <
      item
        DataType = ftFloat
        Name = 'SINIR'
        ParamType = ptUnknown
      end>
    object queryJOKEYREFERANS: TIntegerField
      FieldName = 'REFERANS'
      Origin = 'VIDIN."jokeyana.DB".REFERANS'
    end
    object queryJOKEYADISOYADI: TStringField
      FieldName = 'ADISOYADI'
      Origin = 'VIDIN."jokeyana.DB".ADISOYADI'
      Size = 40
    end
    object queryJOKEYKAYITTURU: TStringField
      FieldName = 'KAYITTURU'
      Origin = 'VIDIN."jokeyana.DB".KAYITTURU'
      Size = 25
    end
    object queryJOKEYDEVIRBIRINCILIGI: TFloatField
      FieldName = 'DEVIRBIRINCILIGI'
      Origin = 'VIDIN."jokeyana.DB".DEVIRBIRINCILIGI'
    end
    object queryJOKEYDEVIRTOPLAMKOSU: TFloatField
      FieldName = 'DEVIRTOPLAMKOSU'
      Origin = 'VIDIN."jokeyana.DB".DEVIRTOPLAMKOSU'
    end
    object queryJOKEYTOPLAMKOSU: TFloatField
      FieldName = 'TOPLAMKOSU'
      Origin = 'VIDIN."jokeyana.DB".TOPLAMKOSU'
    end
    object queryJOKEYTOPLAMBIRINCI: TFloatField
      FieldName = 'TOPLAMBIRINCI'
      Origin = 'VIDIN."jokeyana.DB".TOPLAMBIRINCI'
    end
    object queryJOKEYKOSTUGUYER: TStringField
      FieldName = 'KOSTUGUYER'
      Origin = 'VIDIN."jokeyana.DB".KOSTUGUYER'
      Size = 25
    end
    object queryJOKEYKOSUTOPLAMI: TFloatField
      FieldName = 'KOSUTOPLAMI'
      Origin = 'VIDIN."jokeyana.DB".KOSUTOPLAMI'
    end
    object queryJOKEYBIRINCI: TFloatField
      FieldName = 'BIRINCI'
      Origin = 'VIDIN."jokeyana.DB".BIRINCI'
    end
    object queryJOKEYIKINCI: TFloatField
      FieldName = 'IKINCI'
      Origin = 'VIDIN."jokeyana.DB".IKINCI'
    end
    object queryJOKEYUCUNCU: TFloatField
      FieldName = 'UCUNCU'
      Origin = 'VIDIN."jokeyana.DB".UCUNCU'
    end
    object queryJOKEYDORDUNCU: TFloatField
      FieldName = 'DORDUNCU'
      Origin = 'VIDIN."jokeyana.DB".DORDUNCU'
    end
    object queryJOKEYIKILIYUZDESI: TSmallintField
      FieldName = 'IKILIYUZDESI'
      Origin = 'VIDIN."jokeyana.DB".IKILIYUZDESI'
    end
    object queryJOKEYSONONYARISI: TStringField
      FieldName = 'SONONYARISI'
      Origin = 'VIDIN."jokeyana.DB".SONONYARISI'
      Size = 15
    end
  end
  object dsrcAPRANTI: TDataSource
    DataSet = queryAPRANTI
    Left = 496
    Top = 360
  end
  object queryAPRANTI: TQuery
    DatabaseName = 'VIDIN'
    Constrained = True
    SQL.Strings = (
      'SELECT * FROM JOKEYANA'
      
        'WHERE (KAYITTURU='#39'JOKEY'#39' AND ((DEVIRBIRINCILIGI+TOPLAMBIRINCI) <' +
        ' :SINIR AND TERFI = FALSE))'
      
        'ORDER BY BIRINCI DESC, IKINCI DESC, UCUNCU DESC, DORDUNCU DESC, ' +
        'IKILIYUZDESI DESC, KOSUTOPLAMI DESC')
    Left = 496
    Top = 328
    ParamData = <
      item
        DataType = ftFloat
        Name = 'SINIR'
        ParamType = ptUnknown
      end>
    object queryAPRANTIREFERANS: TIntegerField
      FieldName = 'REFERANS'
      Origin = 'VIDIN."JOKEYANA.DB".REFERANS'
    end
    object queryAPRANTIADISOYADI: TStringField
      FieldName = 'ADISOYADI'
      Origin = 'VIDIN."JOKEYANA.DB".ADISOYADI'
      Size = 40
    end
    object queryAPRANTIKAYITTURU: TStringField
      FieldName = 'KAYITTURU'
      Origin = 'VIDIN."JOKEYANA.DB".KAYITTURU'
      Size = 25
    end
    object queryAPRANTIDEVIRBIRINCILIGI: TFloatField
      FieldName = 'DEVIRBIRINCILIGI'
      Origin = 'VIDIN."JOKEYANA.DB".DEVIRBIRINCILIGI'
    end
    object queryAPRANTIDEVIRTOPLAMKOSU: TFloatField
      FieldName = 'DEVIRTOPLAMKOSU'
      Origin = 'VIDIN."JOKEYANA.DB".DEVIRTOPLAMKOSU'
    end
    object queryAPRANTITOPLAMKOSU: TFloatField
      FieldName = 'TOPLAMKOSU'
      Origin = 'VIDIN."JOKEYANA.DB".TOPLAMKOSU'
    end
    object queryAPRANTITOPLAMBIRINCI: TFloatField
      FieldName = 'TOPLAMBIRINCI'
      Origin = 'VIDIN."JOKEYANA.DB".TOPLAMBIRINCI'
    end
    object queryAPRANTIKOSTUGUYER: TStringField
      FieldName = 'KOSTUGUYER'
      Origin = 'VIDIN."JOKEYANA.DB".KOSTUGUYER'
      Size = 25
    end
    object queryAPRANTIKOSUTOPLAMI: TFloatField
      FieldName = 'KOSUTOPLAMI'
      Origin = 'VIDIN."JOKEYANA.DB".KOSUTOPLAMI'
    end
    object queryAPRANTIBIRINCI: TFloatField
      FieldName = 'BIRINCI'
      Origin = 'VIDIN."JOKEYANA.DB".BIRINCI'
    end
    object queryAPRANTIIKINCI: TFloatField
      FieldName = 'IKINCI'
      Origin = 'VIDIN."JOKEYANA.DB".IKINCI'
    end
    object queryAPRANTIUCUNCU: TFloatField
      FieldName = 'UCUNCU'
      Origin = 'VIDIN."JOKEYANA.DB".UCUNCU'
    end
    object queryAPRANTIDORDUNCU: TFloatField
      FieldName = 'DORDUNCU'
      Origin = 'VIDIN."JOKEYANA.DB".DORDUNCU'
    end
    object queryAPRANTIIKILIYUZDESI: TSmallintField
      FieldName = 'IKILIYUZDESI'
      Origin = 'VIDIN."JOKEYANA.DB".IKILIYUZDESI'
    end
    object queryAPRANTISONONYARISI: TStringField
      FieldName = 'SONONYARISI'
      Origin = 'VIDIN."JOKEYANA.DB".SONONYARISI'
      Size = 15
    end
  end
  object dsrcANTRENOR: TDataSource
    DataSet = queryANTRENOR
    Left = 528
    Top = 360
  end
  object queryANTRENOR: TQuery
    DatabaseName = 'VIDIN'
    Constrained = True
    SQL.Strings = (
      'SELECT * FROM JOKEYANA'
      'WHERE KAYITTURU='#39'ANTRENOR'#39
      
        'ORDER BY BIRINCI DESC, IKINCI DESC, UCUNCU DESC, DORDUNCU DESC, ' +
        'IKILIYUZDESI DESC, KOSUTOPLAMI DESC')
    Left = 528
    Top = 328
    object queryANTRENORREFERANS: TIntegerField
      FieldName = 'REFERANS'
      Origin = 'VIDIN."JOKEYANA.DB".REFERANS'
    end
    object queryANTRENORADISOYADI: TStringField
      FieldName = 'ADISOYADI'
      Origin = 'VIDIN."JOKEYANA.DB".ADISOYADI'
      Size = 40
    end
    object queryANTRENORKAYITTURU: TStringField
      FieldName = 'KAYITTURU'
      Origin = 'VIDIN."JOKEYANA.DB".KAYITTURU'
      Size = 25
    end
    object queryANTRENORDEVIRBIRINCILIGI: TFloatField
      FieldName = 'DEVIRBIRINCILIGI'
      Origin = 'VIDIN."JOKEYANA.DB".DEVIRBIRINCILIGI'
    end
    object queryANTRENORDEVIRTOPLAMKOSU: TFloatField
      FieldName = 'DEVIRTOPLAMKOSU'
      Origin = 'VIDIN."JOKEYANA.DB".DEVIRTOPLAMKOSU'
    end
    object queryANTRENORTOPLAMKOSU: TFloatField
      FieldName = 'TOPLAMKOSU'
      Origin = 'VIDIN."JOKEYANA.DB".TOPLAMKOSU'
    end
    object queryANTRENORTOPLAMBIRINCI: TFloatField
      FieldName = 'TOPLAMBIRINCI'
      Origin = 'VIDIN."JOKEYANA.DB".TOPLAMBIRINCI'
    end
    object queryANTRENORKOSTUGUYER: TStringField
      FieldName = 'KOSTUGUYER'
      Origin = 'VIDIN."JOKEYANA.DB".KOSTUGUYER'
      Size = 25
    end
    object queryANTRENORKOSUTOPLAMI: TFloatField
      FieldName = 'KOSUTOPLAMI'
      Origin = 'VIDIN."JOKEYANA.DB".KOSUTOPLAMI'
    end
    object queryANTRENORBIRINCI: TFloatField
      FieldName = 'BIRINCI'
      Origin = 'VIDIN."JOKEYANA.DB".BIRINCI'
    end
    object queryANTRENORIKINCI: TFloatField
      FieldName = 'IKINCI'
      Origin = 'VIDIN."JOKEYANA.DB".IKINCI'
    end
    object queryANTRENORUCUNCU: TFloatField
      FieldName = 'UCUNCU'
      Origin = 'VIDIN."JOKEYANA.DB".UCUNCU'
    end
    object queryANTRENORDORDUNCU: TFloatField
      FieldName = 'DORDUNCU'
      Origin = 'VIDIN."JOKEYANA.DB".DORDUNCU'
    end
    object queryANTRENORIKILIYUZDESI: TSmallintField
      FieldName = 'IKILIYUZDESI'
      Origin = 'VIDIN."JOKEYANA.DB".IKILIYUZDESI'
    end
    object queryANTRENORSONONYARISI: TStringField
      FieldName = 'SONONYARISI'
      Origin = 'VIDIN."JOKEYANA.DB".SONONYARISI'
      Size = 15
    end
  end
  object tblPISTAYARI: TTable
    DatabaseName = 'VIDIN'
    TableName = 'pistayari.db'
    Left = 432
    Top = 328
    object tblPISTAYARIGECISSAYISI: TFloatField
      FieldName = 'GECISSAYISI'
    end
  end
  object SaveDialog1: TSaveDialog
    FileName = 'KAZANC'
    Filter = 'MacOS Metin Belgesi|*.txt'
    Left = 432
    Top = 362
  end
end
