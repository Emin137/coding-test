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
            StringBuilder sb = new StringBuilder();
            sb.Append("<");
            string[] input = Console.ReadLine().Split();
            int N = int.Parse(input[0]);
            int K = int.Parse(input[1]);
            Queue<int> queue = new Queue<int>(Enumerable.Range(1,N));
            int count = 0;
            while(queue.Count > 1)
            {
                count++;
                if(count==K)
                {
                    sb.Append($"{queue.Dequeue()}, ");
                    count = 0;
                }
                else
                {
                    queue.Enqueue(queue.Dequeue());
                }
            }
            sb.Append($"{queue.Dequeue()}>");
            Console.WriteLine(sb);
        }
    }
}
