object frmJokeyAyarlari: TfrmJokeyAyarlari
  Left = 286
  Top = 253
  BorderIcons = [biSystemMenu]
  BorderStyle = bsDialog
  Caption = 'Jokey Ayarlarý'
  ClientHeight = 90
  ClientWidth = 315
  Color = clBtnFace
  UseDockManager = True
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  Scaled = False
  Visible = True
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 313
    Height = 57
    TabOrder = 0
    object Label1: TLabel
      Left = 9
      Top = 16
      Width = 168
      Height = 26
      Alignment = taRightJustify
      Caption = 'Aprantinin Jokey Olmasý Ýçin Gerekli Olan Birincilik Sayýsý'
      WordWrap = True
    end
    object dbeditAYARLAR: TDBEdit
      Left = 192
      Top = 16
      Width = 113
      Height = 28
      DataField = 'GECISSAYISI'
      DataSource = dsrcPISTAYARI
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      OnKeyPress = dbeditAYARLARKeyPress
    end
  end
  object BitBtn1: TBitBtn
    Left = 240
    Top = 64
    Width = 75
    Height = 25
    Caption = 'Tamam'
    TabOrder = 1
    OnClick = BitBtn1Click
  end
  object dsrcPISTAYARI: TDataSource
    DataSet = tblPISTAYARI
    Top = 56
  end
  object tblPISTAYARI: TTable
    DatabaseName = 'VIDIN'
    TableName = 'pistayari.db'
    Left = 32
    Top = 56
    object tblPISTAYARIGECISSAYISI: TFloatField
      FieldName = 'GECISSAYISI'
    end
  end
end
