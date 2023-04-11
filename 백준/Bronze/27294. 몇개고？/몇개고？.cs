using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Program
{
    class Program
    {
        static void Main()
        {
            int time = 0;
            bool isDrinking = false;
            int answer = 0;

            string[] input = Console.ReadLine().Split();
            int.TryParse(input[0], out time);
            isDrinking = input[1] == "1" ? true : false;
                     
            if (time >= 12 && time <= 16 && !isDrinking)
                answer = 320;
            else
                answer = 280;

            Console.WriteLine(answer);
        }
    }
}