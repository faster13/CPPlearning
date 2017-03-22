using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace SearchFile
{
    class Program
    {
        static string find(string path, string name)
        {
            string result = "";
            var files = Directory.EnumerateFiles(path, name);
            foreach (string file in files)
            {
                if (file.Contains(name)) { return file; }
            }
            foreach(string dir in Directory.EnumerateDirectories(path))
            {
                result = find(dir, name);
                if (result.Contains(name)) { return result; }
            }
            return "NULL";
        }

        static void Main(string[] args)
        {
            string path = Directory.GetCurrentDirectory();
            string fl = find(path, "");
            Console.WriteLine("Result: " + fl);
            Console.ReadKey();
        }
    }
}
