   M S B A M L   `   `   `  ����G  COnline Store, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null+clr-namespace:Online_StoreOnline_Store  5   	       Online_Store.MainWindow   5   	   W SPresentationCore, Version=6.0.2.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=6.0.2.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=6.0.2.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=6.0.2.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5   	   R NSystem.Xaml, Version=6.0.2.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   ,localclr-namespace:Online_Store     5   	   _ [MaterialDesignThemes.Wpf, Version=4.9.0.0, Culture=neutral, PublicKeyToken=df2a72020bd7962aFmaterialDesign1http://materialdesigninxaml.net/winfx/xaml/themes  5   	      MaterialDesignBody#���   5   	   $��Regular"�5	   	   $��13(�5
   	   &   System.Windows.Media.TextOptions    TextFormattingMode$  Ideal=�5   	      TextRenderingMode$
 Auto=�5   	     MaterialDesignFont#���  5   	   
������� � Title$ Store��5   	   $	��700��6   $
��1200��6$   .��5      � .+�5   
   � .+�5      �� -   5        
���   �$��Bottom=�5   (   $��Right=�6C   $��	0 0 50 20q�6_    & "MaterialDesignFloatingActionButton#��[ 5      
���   �{�5      �� *DataContext.ControlsEnabled+ �� RelativeSource �� *FindAncestor+ �� AncestorType
 Window.��5      '  !MaterialDesignThemes.Wpf.PackIcon     Kind$ 	PlusThick=�6*   5      5      � 5   
    � RowDefinitions 5      �� 5      $
��0.1* �6    �� 5      .+�5       � $��0��6   .+�5!      �� -   5         ��Name$ searchTextBox��5!   �   $��Center=�6   $��Center=�6>   $��Search��6Y   
���� ��$��400 0 400 0q�6�   
���� ��6�   5"      � 5$      $��1��6   .+�5%      �� -   5        $��ProductsLisView��5%      ��62   �� *
products+ �� View 5&      �� 5'      .P�5(      �� 	 �� CellTemplate	 5)   "   �� 5*   &   .R�5+   *   �� 
 �� Orientation$
 Vertical=�65   $��Center=�6L   .+�5,   .   �� $��imagee��64   $	��100��6_   $	��100��6k   ��6B   �� *	ImagePath+6k   �� 5-   .   $��Center=�68   $��0,5,0,0q�6k   ��6U   �� *Name+6k   �� 5/   .   -   5         . *MaterialDesignFloatingActionMiniDarkButton#��[ 50   1    � ToolTip$0 *MaterialDesignFloatingActionMiniDarkButton��51   1   {�52   1   �� *DataContext.ControlsEnabled+ �� *FindAncestor+
 Window.��53   2     $ FileEdit=�6J   54   /   55   +   56   '   58      59      ��5;      �� 5<      .R�5=      �  � Orientation$ 
Horizontal=�6(   5>      5@      5A      5B      5C      5D      