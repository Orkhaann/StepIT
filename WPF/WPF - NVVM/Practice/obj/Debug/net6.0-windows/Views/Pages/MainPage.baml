   M S B A M L   `   `   `  ����C  ?Practice, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null;"clr-namespace:Practice.Views.PagesPractice.Views.Pages  5      #    Practice.Views.Pages.MainPage   5      W SPresentationCore, Version=6.0.2.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=6.0.2.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=6.0.2.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=6.0.2.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5      R NSystem.Xaml, Version=6.0.2.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5      Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5      @d2http://schemas.microsoft.com/expression/blend/2008     5      4local"clr-namespace:Practice.Views.Pages     5      _ [MaterialDesignThemes.Wpf, Version=4.9.0.0, Culture=neutral, PublicKeyToken=df2a72020bd7962aFmaterialDesign1http://materialdesigninxaml.net/winfx/xaml/themes  5      -   5        $
��page��5
        N� Title$  MainPage��6   .��5      � 
�������.+�5   
   �� -   5        $��combobox��5       �� DisplayMemberPath$
 name��5   	   
�������$	��350��5      $��36��6    $��210,75,240,0q�6,   $	��Top=�6B   ��5   $   �� *Users+5      �� 5   
   $	��340��6   $	��200��6!    �� Orientation$ 
Horizontal=�6.   $��Center=�6G   .+�5      �� $	��Add��6   $	��5 0q�6#   ��60   �� *
AddCommand+��6O   ��  �� ElementName$
 page���� 5      $��Remove��6   $	��5 0q�6&   ��63   �� *RemoveCommand+��6U   �� $ combobox�� �� Path$ SelectedIndex��� 5      $
��Edit��6   $	��5 0q�6$   ��61   �� *EditCommand+��6Q   �� $ combobox��$ SelectedIndex��� 5      $��GetAll��6   $
��10 0q�6&   ��64   �� *GetAllCommand+��6V   �� $
 page��5      5      5       