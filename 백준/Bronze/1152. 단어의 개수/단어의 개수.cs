using System;
using System.Collections.Generic;


namespace Program
{
    class Program
    {
        static void Main()
        {
            string input = Console.ReadLine();
            string[] words = input.Split(' ');
            int spaceCount = CheckSpace(words);
            Console.WriteLine(words.Length - spaceCount);
        }

        static int CheckSpace(string[] words)
        {
            int count = 0;
            for(int i=0;i<words.Length;i++)
            {
                if (words[i] == "")
                    count++;
            }
            return count;
        }
    }
}
