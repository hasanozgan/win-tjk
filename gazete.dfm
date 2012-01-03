object frmGazete: TfrmGazete
  Left = 242
  Top = 113
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsDialog
  Caption = 'Gazete Giriþleri'
  ClientHeight = 297
  ClientWidth = 473
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
  object Bevel1: TBevel
    Left = 0
    Top = 0
    Width = 473
    Height = 297
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 40
    Width = 457
    Height = 249
    DataSource = dsrcGAZETE
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'GAZETE_ADI'
        Title.Alignment = taCenter
        Title.Caption = 'Gazete Adý'
        Width = 120
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'YETKILI'
        Title.Alignment = taCenter
        Title.Caption = 'Yetkili'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'TELEFON'
        Title.Alignment = taCenter
        Title.Caption = 'Telefonu'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'FAX'
        Title.Alignment = taCenter
        Title.Caption = 'Faks'
        Width = 100
        Visible = True
      end>
  end
  object DBNavigator1: TDBNavigator
    Left = 96
    Top = 8
    Width = 280
    Height = 25
    DataSource = dsrcGAZETE
    TabOrder = 1
  end
  object dsrcGAZETE: TDataSource
    DataSet = tblGAZETE
    Left = 16
    Top = 256
  end
  object tblGAZETE: TTable
    Active = True
    DatabaseName = 'VIDIN'
    Filtered = True
    TableName = 'GAZETE.db'
    Left = 48
    Top = 256
    object tblGAZETEGAZETE_ADI: TStringField
      FieldName = 'GAZETE_ADI'
      Size = 35
    end
    object tblGAZETEYETKILI: TStringField
      FieldName = 'YETKILI'
      Size = 50
    end
    object tblGAZETETELEFON: TStringField
      FieldName = 'TELEFON'
      Size = 30
    end
    object tblGAZETEFAX: TStringField
      FieldName = 'FAX'
      Size = 30
    end
  end
end
