object frmHandikap: TfrmHandikap
  Left = 249
  Top = 131
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsDialog
  Caption = 'Handikap/Antrenör Hýzlý Giriþ Ekraný'
  ClientHeight = 257
  ClientWidth = 418
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 417
    Height = 257
    TabOrder = 0
    object DBGrid1: TDBGrid
      Left = 8
      Top = 13
      Width = 401
      Height = 236
      DataSource = dsrcHANDIKAP
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      OnKeyPress = DBGrid1KeyPress
      Columns = <
        item
          Expanded = False
          FieldName = 'CINSI'
          ReadOnly = True
          Title.Alignment = taCenter
          Title.Caption = 'Cinsi'
          Width = 75
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'ATIN_ADI'
          ReadOnly = True
          Title.Alignment = taCenter
          Title.Caption = 'Atýn Adý'
          Width = 125
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'HANDIKAP'
          Title.Alignment = taCenter
          Title.Caption = 'H.kap Puaný'
          Width = 82
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'ANTRENOR'
          Title.Alignment = taCenter
          Title.Caption = 'Antrenör'
          Width = 82
          Visible = True
        end>
    end
  end
  object dsrcHANDIKAP: TDataSource
    DataSet = tblHANDIKAP
    Left = 424
    Top = 40
  end
  object tblHANDIKAP: TTable
    Active = True
    DatabaseName = 'VIDIN'
    FilterOptions = [foCaseInsensitive, foNoPartialCompare]
    TableName = 'ATLAR.db'
    Left = 424
    Top = 8
  end
end
