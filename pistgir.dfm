object frmPistGirisi: TfrmPistGirisi
  Left = 364
  Top = 248
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Pist Giriþi'
  ClientHeight = 234
  ClientWidth = 258
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
    Width = 257
    Height = 233
    TabOrder = 0
    object DBNavigator1: TDBNavigator
      Left = 8
      Top = 16
      Width = 240
      Height = 25
      DataSource = dsrcPIST
      TabOrder = 0
    end
    object DBGrid1: TDBGrid
      Left = 8
      Top = 48
      Width = 241
      Height = 177
      DataSource = dsrcPIST
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'PISTYERI'
          Title.Alignment = taCenter
          Title.Caption = 'Koþu Pisti'
          Width = 206
          Visible = True
        end>
    end
  end
  object dsrcPIST: TDataSource
    DataSet = tblPIST
    Left = 48
    Top = 192
  end
  object tblPIST: TTable
    Active = True
    DatabaseName = 'VIDIN'
    TableName = 'pist.db'
    Left = 16
    Top = 192
    object tblPISTPISTYERI: TStringField
      FieldName = 'PISTYERI'
      Size = 50
    end
  end
end
