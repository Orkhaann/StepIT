   M S B A M L   `   `   `  ����C  ?Practice, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null;"clr-namespace:Practice.Views.PagesPractice.Views.Pages  5      %    Practice.Views.Pages.GetAllPage   5      W SPresentationCore, Version=6.0.2.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=6.0.2.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=6.0.2.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=6.0.2.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5      R NSystem.Xaml, Version=6.0.2.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5      Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5      @d2http://schemas.microsoft.com/expression/blend/2008     5      4local"clr-namespace:Practice.Views.Pages     5      _ [MaterialDesignThemes.Wpf, Version=4.9.0.0, Culture=neutral, PublicKeyToken=df2a72020bd7962aFmaterialDesign1http://materialdesigninxaml.net/winfx/xaml/themes  68   -   5        $
��page��5	        N� Title$  
GetAllPage��6   .��5      �  � ColumnDefinitions 5   
   �� 5      $
��0.1* �6   �� 5      .+�5   
   � $��0��6   .+�5      �� $
��Left=�6   $	��Top=�60   ��6H   ��  �� ElementName$
 page����6v   �� *BackBtnClicked+.��5      '  !MaterialDesignThemes.Wpf.PackIcon     Kind$ KeyboardReturn=�6*   5      5      � 5   
   $��1��6   .+�5      �� ��6   �� *Users+ �� View 5      �� 5      .P�5      �� $��ID��6)    �� DisplayMemberBinding 65   �� *
Users.id+�� 5      $
��NAME��6)    67   �� *
Users.name+�� 5      $��USERNAME��6)    6;   �� *Users.username+5      5      5      5!      5"      