using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

namespace Program
{
    public class Program
    {
        static void Main()
        {
            StringBuilder sb = new StringBuilder();
            int testCase = int.Parse(Console.ReadLine());
            for (int i = 0; i < testCase; i++)
            {
                // 첫번째 줄, 문서의 갯수N , 궁금한 문서M
                string[] input = Console.ReadLine().Split();
                int N = int.Parse(input[0]);
                int M = int.Parse(input[1]);

                // 두번째 줄, N개 문서의 중요도
                string[] input2 = Console.ReadLine().Split();
                Queue<int> que;
                que = new Queue<int>(Array.ConvertAll<string, int>(input2, int.Parse));
                int printCount = 0;
                int pin = M;

                while (true)
                {
                    if (que.Peek() == que.Max())
                    {
                        printCount++;
                        if (pin == 0)
                        {
                            sb.AppendLine(printCount.ToString());
                            break;
                        }
                        que.Dequeue();
                        pin--;

                    }
                    else
                    {
                        if (pin == 0)
                        {
                            pin = que.Count();
                        }
                        que.Enqueue(que.Dequeue());
                        pin--;
                    }
                }
            }
            Console.WriteLine(sb);
        }
    }
}
