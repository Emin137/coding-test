using System;
using System.Text;
using System.Linq;
using System.Collections.Generic;
using System.Collections;


namespace Program
{
    class Program
    {
        static void Main()
        {
            int inputNum1 = int.Parse(Console.ReadLine());
            string[] inputArr = Console.ReadLine().Split();
            int[] inputArr1 = System.Array.ConvertAll<string, int>(inputArr, int.Parse);
            List<int> list = inputArr1.ToList();
            list.Sort();
            int inputNum2 = int.Parse(Console.ReadLine());
            string[] inputArr2 = Console.ReadLine().Split();
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < inputNum2; i++)
            {
                int index = list.BinarySearch(int.Parse(inputArr2[i]));
                sb.AppendLine(index < 0 ? "0" : "1");
            }

            Console.WriteLine(sb);
        }
     
    }
}
