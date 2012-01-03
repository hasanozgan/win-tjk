object frmHataMesaji2: TfrmHataMesaji2
  Left = 490
  Top = 115
  BorderIcons = []
  BorderStyle = bsDialog
  Caption = 'Týk týk týk eyi günler. :))) hahahaha '
  ClientHeight = 138
  ClientWidth = 283
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
    Width = 281
    Height = 105
    TabOrder = 0
    object Label1: TLabel
      Left = 80
      Top = 16
      Width = 193
      Height = 17
      Alignment = taRightJustify
      AutoSize = False
      Caption = 'Ooooooo bu antrenörün kaydý bile yok.'
      WordWrap = True
    end
    object Image1: TImage
      Left = 16
      Top = 24
      Width = 33
      Height = 33
      Picture.Data = {
        055449636F6E0000010001002020100000000000E80200001600000028000000
        2000000040000000010004000000000080020000000000000000000000000000
        0000000000000000000080000080000000808000800000008000800080800000
        80808000C0C0C0000000FF0000FF000000FFFF00FF000000FF00FF00FFFF0000
        FFFFFF0000000000000000000000000000000000000000000000BBBBBBBB0000
        00000000000000000BBBBBBBBBBBBBB00000000000000000BBBBBBBBBBBBBBBB
        00000000000000BBBBBBBBBBBBBBBBBBBB00000000000BBBBBBBBB0000BBBBBB
        BBB000000000BBBBBBBBB099990BBBBBBBBB00000000BBBBBBBB09999990BBBB
        BBBB0000000BBBBBBBB0900000090BBBBBBBB00000BBBBBBBB000BBBBBB000BB
        BBBBBB0000BBBBBBB00BBBBBBBBBB00BBBBBBB0000BBBBBBB0BBBBBBBBBBBB0B
        BBBBBB000BBBBBBB0BBBBBBBBBBBBBB0BBBBBBB00BBB0000BBBBBBBBBBBBBBBB
        0000BBB00BBBBBB0BBBBBBBBBBBBBBBB0BBBBBB00BBBBBBB0BBBBBBBBBBBBBB0
        BBBBBBB00BBBBBBB0BBBBBBBBBBBBBB0BBBBBBB00BBBBBBBBBB00BBBBBB00BBB
        BBBBBBB00BBBBBBBBB0000BBBB0000BBBBBBBBB00BBBBBBBBB0000BBBB0000BB
        BBBBBBB000BBBBBBBB0000BBBB0000BBBBBBBB0000BBBBBBBB0000BBBB0000BB
        BBBBBB0000BBBBBBBB0000BBBB0000BBBBBBBB00000BBBBBBBB00BBBBBB00BBB
        BBBBB0000000BBBBBBBBBBBBBBBBBBBBBBBB00000000BBBBBBBBBBBBBBBBBBBB
        BBBB000000000BBBBBBBBBBBBBBBBBBBBBB00000000000BBBBBBBBBBBBBBBBBB
        BB00000000000000BBBBBBBBBBBBBBBB00000000000000000BBBBBBBBBBBBBB0
        00000000000000000000BBBBBBBB000000000000000000000000000000000000
        00000000FFF00FFFFF8001FFFE00007FFC00003FF800001FF000000FE0000007
        C0000003C0000003800000018000000180000001000000000000000000000000
        0000000000000000000000000000000000000000800000018000000180000001
        C0000003C0000003E0000007F000000FF800001FFC00003FFE00007FFF8001FF
        FFF00FFF}
    end
    object Label2: TLabel
      Left = 64
      Top = 36
      Width = 209
      Height = 45
      Alignment = taRightJustify
      AutoSize = False
      Caption = 
        'Bak sana ne diyecem, istiyorsan sana bir þans vereyim de, burada' +
        'n hemencicik bu antrenörü kaydet.'
      WordWrap = True
    end
    object Label3: TLabel
      Left = 159
      Top = 80
      Width = 114
      Height = 13
      Alignment = taRightJustify
      Caption = 'Ne dersin hoþ olmaz mý?'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clNavy
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
  end
  object Panel1: TPanel
    Left = -8
    Top = 105
    Width = 345
    Height = 41
    BevelOuter = bvNone
    TabOrder = 1
    object btnEvet: TBitBtn
      Left = 124
      Top = 5
      Width = 75
      Height = 25
      Caption = '&Evet'
      TabOrder = 1
      OnClick = btnEvetClick
      OnKeyPress = btnEvetKeyPress
      Kind = bkYes
    end
    object btnHayir: TBitBtn
      Left = 214
      Top = 5
      Width = 75
      Height = 25
      Caption = '&Hayýr'
      TabOrder = 0
      OnClick = btnHayirClick
      Kind = bkNo
    end
  end
end
