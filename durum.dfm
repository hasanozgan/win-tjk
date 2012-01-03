object frmIlerlemeDurumu: TfrmIlerlemeDurumu
  Left = 334
  Top = 191
  Width = 330
  Height = 204
  BorderIcons = [biSystemMenu, biMinimize]
  Caption = 'Ýlerleme Durumu'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 233
    Height = 137
    Enabled = False
    TabOrder = 0
    object CheckBox1: TCheckBox
      Left = 16
      Top = 16
      Width = 105
      Height = 17
      TabStop = False
      Caption = 'Ganyan Toplamý'
      Color = clScrollBar
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Pitch = fpVariable
      Font.Style = []
      ParentColor = False
      ParentFont = False
      TabOrder = 0
    end
    object CheckBox2: TCheckBox
      Left = 16
      Top = 32
      Width = 97
      Height = 17
      TabStop = False
      Caption = 'Altýlý Ganyan'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Pitch = fpVariable
      Font.Style = []
      ParentFont = False
      TabOrder = 1
    end
    object CheckBox3: TCheckBox
      Left = 16
      Top = 48
      Width = 97
      Height = 17
      TabStop = False
      Caption = 'Ýkili'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Pitch = fpVariable
      Font.Style = []
      ParentFont = False
      TabOrder = 2
    end
    object CheckBox4: TCheckBox
      Left = 16
      Top = 64
      Width = 97
      Height = 17
      TabStop = False
      Caption = 'Çifte'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Pitch = fpVariable
      Font.Style = []
      ParentFont = False
      TabOrder = 3
    end
    object CheckBox5: TCheckBox
      Left = 16
      Top = 80
      Width = 97
      Height = 17
      TabStop = False
      Caption = 'Sýralý Üçlü'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Pitch = fpVariable
      Font.Style = []
      ParentFont = False
      TabOrder = 4
    end
    object CheckBox6: TCheckBox
      Left = 16
      Top = 96
      Width = 97
      Height = 17
      TabStop = False
      Caption = 'Tabela Dörtlü'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Pitch = fpVariable
      Font.Style = []
      ParentFont = False
      TabOrder = 5
    end
    object CheckBox7: TCheckBox
      Left = 16
      Top = 112
      Width = 97
      Height = 17
      TabStop = False
      Caption = 'Üçlü Ganyan'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Pitch = fpVariable
      Font.Style = []
      ParentFont = False
      TabOrder = 6
    end
  end
  object GroupBox2: TGroupBox
    Left = 0
    Top = 136
    Width = 233
    Height = 41
    TabOrder = 1
    object ProgressBar1: TProgressBar
      Left = 8
      Top = 16
      Width = 217
      Height = 16
      Min = 0
      Max = 100
      TabOrder = 0
    end
  end
  object BitBtn1: TBitBtn
    Left = 240
    Top = 37
    Width = 81
    Height = 25
    Caption = 'Ýptal'
    TabOrder = 2
    OnClick = BitBtn1Click
    Kind = bkCancel
  end
  object BitBtn2: TBitBtn
    Left = 240
    Top = 8
    Width = 81
    Height = 25
    Caption = 'Tamam'
    TabOrder = 3
    OnClick = BitBtn2Click
    Kind = bkOK
  end
end
