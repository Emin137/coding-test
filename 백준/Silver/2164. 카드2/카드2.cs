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
            int N = int.Parse(Console.ReadLine());
            Queue<int> que = new Queue<int>();

            for (int i = 1; i <= N; i++)
            {
                que.Enqueue(i);
            }

            int count = 0;
            while(que.Count!=1)
            {
                if(count%2==0)
                {
                    que.Dequeue();
                    count++;
                }
                else
                {
                    que.Enqueue(que.Dequeue());
                    count++;
                }
            }
            Console.WriteLine(que.Dequeue());
        }
    }
}