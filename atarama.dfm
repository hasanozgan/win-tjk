object frmAtArama: TfrmAtArama
  Left = 305
  Top = 195
  BorderIcons = [biSystemMenu]
  BorderStyle = bsDialog
  Caption = 'At Arama'
  ClientHeight = 81
  ClientWidth = 265
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 265
    Height = 81
    TabOrder = 0
    object Edit1: TEdit
      Left = 8
      Top = 16
      Width = 249
      Height = 21
      TabOrder = 0
      OnKeyPress = Edit1KeyPress
    end
    object Button1: TButton
      Left = 184
      Top = 48
      Width = 75
      Height = 25
      Caption = 'Tamam'
      TabOrder = 1
      TabStop = False
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 104
      Top = 48
      Width = 75
      Height = 25
      Caption = 'Ýptal'
      TabOrder = 2
      TabStop = False
      OnClick = Button2Click
    end
  end
end
