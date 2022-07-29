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
            int N = int.Parse(Console.ReadLine()); // 자연수
            int result = 0;
            bool isFind = false;
            for (int i = 0; i < N; i++)
            {
                char[] Array = i.ToString().ToCharArray();
                int sum = 0;
                for (int j = 0; j < Array.Length; j++)
                {
                    sum += int.Parse(Array[j].ToString());
                }
                result = sum + i;

                if(result == N)
                {
                    Console.WriteLine(i);
                    isFind = true;
                    break;
                }
            }
            if(!isFind)
                Console.WriteLine(0);
        }
    }
}