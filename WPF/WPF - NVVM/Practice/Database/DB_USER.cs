using Practice.Model;
using Practice.Service;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Text.Json;
using System.Text.Json.Serialization;
using System.Threading.Tasks;
using System.Windows.Shapes;

namespace Practice.Database;

static public class DB_USER
{
    static public ObservableCollection<User>? Users { get => users; set { users = value;  } }

    static private string Path = "../../../Database/users.json";
    private static ObservableCollection<User>? users;

    static public void LoadDatabase()
    {
        string json = File.ReadAllText(Path);
        Users = JsonSerializer.Deserialize<ObservableCollection<User>>(json);
    }

    static  public void SaveDatabase()
    {
        var json = JsonSerializer.Serialize(Users!,new JsonSerializerOptions() {WriteIndented = true });
        File.WriteAllText(Path, json);
    }
}
