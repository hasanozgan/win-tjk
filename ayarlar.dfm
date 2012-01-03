object frmAyarlar: TfrmAyarlar
  Left = 530
  Top = 108
  BorderIcons = [biSystemMenu]
  BorderStyle = bsDialog
  Caption = 'Ayarlar'
  ClientHeight = 303
  ClientWidth = 257
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 257
    Height = 273
    Caption = ' Ayarlar '
    TabOrder = 0
    object Label1: TLabel
      Left = 40
      Top = 24
      Width = 77
      Height = 13
      Caption = 'Çýkarýlacak Fiyat'
    end
    object Label2: TLabel
      Left = 10
      Top = 48
      Width = 107
      Height = 13
      Caption = 'Çýkarýlacak Fiyat Puaný'
    end
    object Label3: TLabel
      Left = 41
      Top = 72
      Width = 76
      Height = 13
      Caption = 'Bölünecek Para'
    end
    object Label4: TLabel
      Left = 32
      Top = 96
      Width = 88
      Height = 13
      Caption = 'Altýlý Ganyan Puaný'
    end
    object Label5: TLabel
      Left = 76
      Top = 120
      Width = 44
      Height = 13
      Caption = 'Ýkili Bahis'
    end
    object Label6: TLabel
      Left = 70
      Top = 144
      Width = 50
      Height = 13
      Caption = 'Çifte Bahis'
    end
    object Label7: TLabel
      Left = 41
      Top = 168
      Width = 79
      Height = 13
      Caption = 'Sýralý Üçlü Bahis '
    end
    object Label8: TLabel
      Left = 62
      Top = 192
      Width = 58
      Height = 13
      Caption = 'Tabela Sýralý'
    end
    object Label9: TLabel
      Left = 53
      Top = 216
      Width = 67
      Height = 13
      Caption = 'Tabela Karýþýk'
    end
    object Label10: TLabel
      Left = 58
      Top = 240
      Width = 62
      Height = 13
      Caption = 'Üçlü Ganyan'
    end
    object DBEdit1: TDBEdit
      Left = 128
      Top = 24
      Width = 121
      Height = 21
      DataField = 'CIKARILACAKFIYAT'
      DataSource = dsrcAYARLAR
      TabOrder = 0
      OnChange = DBEdit1Change
      OnKeyPress = DBEdit1KeyPress
    end
    object DBEdit2: TDBEdit
      Left = 128
      Top = 48
      Width = 121
      Height = 21
      DataField = 'VERILECEKPUAN'
      DataSource = dsrcAYARLAR
      TabOrder = 1
      OnChange = DBEdit2Change
      OnKeyPress = DBEdit2KeyPress
    end
    object DBEdit3: TDBEdit
      Left = 128
      Top = 72
      Width = 121
      Height = 21
      DataField = 'BOLUNECEKPUAN'
      DataSource = dsrcAYARLAR
      TabOrder = 2
      OnChange = DBEdit3Change
      OnKeyPress = DBEdit3KeyPress
    end
    object DBEdit4: TDBEdit
      Left = 128
      Top = 96
      Width = 121
      Height = 21
      DataField = 'ALTILIPUAN'
      DataSource = dsrcAYARLAR
      TabOrder = 3
    end
    object DBEdit5: TDBEdit
      Left = 128
      Top = 120
      Width = 121
      Height = 21
      DataField = 'IKILIPUAN'
      DataSource = dsrcAYARLAR
      TabOrder = 4
    end
    object DBEdit6: TDBEdit
      Left = 128
      Top = 144
      Width = 121
      Height = 21
      DataField = 'CIFTEPUAN'
      DataSource = dsrcAYARLAR
      TabOrder = 5
    end
    object DBEdit7: TDBEdit
      Left = 128
      Top = 168
      Width = 121
      Height = 21
      DataField = 'SIRALIUCLUPUAN'
      DataSource = dsrcAYARLAR
      TabOrder = 6
    end
    object DBEdit8: TDBEdit
      Left = 128
      Top = 192
      Width = 121
      Height = 21
      DataField = 'TABELASIRALIPUAN'
      DataSource = dsrcAYARLAR
      TabOrder = 7
    end
    object DBEdit9: TDBEdit
      Left = 128
      Top = 216
      Width = 121
      Height = 21
      DataField = 'TABELAKARISIKPUAN'
      DataSource = dsrcAYARLAR
      TabOrder = 8
    end
    object DBEdit10: TDBEdit
      Left = 128
      Top = 240
      Width = 121
      Height = 21
      DataField = 'UCLUGANYANPUAN'
      DataSource = dsrcAYARLAR
      TabOrder = 9
    end
  end
  object BitBtn1: TBitBtn
    Left = 0
    Top = 276
    Width = 121
    Height = 25
    Caption = 'Tamam'
    TabOrder = 1
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object BitBtn2: TBitBtn
    Left = 136
    Top = 276
    Width = 121
    Height = 25
    Caption = 'Ýptal'
    TabOrder = 2
    OnClick = BitBtn2Click
    Kind = bkCancel
  end
  object dsrcAYARLAR: TDataSource
    DataSet = tblAYARLAR
    Left = 264
    Top = 40
  end
  object tblAYARLAR: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'ayarlar.db'
    Left = 264
    Top = 8
    object tblAYARLARCIKARILACAKFIYAT: TFloatField
      FieldName = 'CIKARILACAKFIYAT'
      currency = True
    end
    object tblAYARLARVERILECEKPUAN: TFloatField
      FieldName = 'VERILECEKPUAN'
    end
    object tblAYARLARBOLUNECEKPUAN: TFloatField
      FieldName = 'BOLUNECEKPUAN'
      currency = True
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
