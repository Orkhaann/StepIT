using System;

interface IButton
{
    void Render();
    void OnClick();
}

class Dialog
{
    public void Render()
    {
        IButton okButton = CreateButton();
        okButton.OnClick();
        okButton.Render();
    }

    public virtual IButton CreateButton()
    {
        throw new NotImplementedException();
    }
}

class WindowsDialog : Dialog
{
    public override IButton CreateButton()
    {
        return new WindowsButton();
    }
}

class WebDialog : Dialog
{
    public override IButton CreateButton()
    {
        return new HTMLButton();
    }
}

class WindowsButton : IButton
{
    public void OnClick()
    {
        Console.WriteLine("Windows Button Clicked");
    }

    public void Render()
    {
        Console.WriteLine("Windows Button Rendered");
    }
}

class HTMLButton : IButton
{
    public void OnClick()
    {
        Console.WriteLine("HTML Button Clicked");
    }

    public void Render()
    {
        Console.WriteLine("HTML Button Rendered");
    }
}