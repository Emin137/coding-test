using System;
namespace PracticeAlgo
{
    class Program
    {
        static int N;
        static int[,] fibo;
        static void Main(string[] args)
        {
            using (var prnt = new System.IO.StreamWriter(Console.OpenStandardOutput()))
            {
                N = int.Parse(Console.ReadLine());
                fibo = new int[41, 2];
                for (int k = 0; k < N; k++)
                {
                    int index = Convert.ToInt32(Console.ReadLine());
                    fibonacci(index);
                    prnt.WriteLine(string.Format("{0} {1}", fibo[index, 0], fibo[index, 1]));
                }
            }
        }
        static (int,int) fibonacci(int n)
        {
            if (n == 0)
            {
                fibo[0, 0] = 1;
                fibo[0, 1] = 0;
                return (fibo[0, 0], fibo[0, 1]);
            }
            else if (n == 1)
            {
                fibo[1, 0] = 0;
                fibo[1, 1] = 1;
                return (fibo[1, 0], fibo[1, 1]);
            }
            if (fibo[n, 0]!=0 && fibo[n, 1] != 0)
            {
                return (fibo[n, 0], fibo[n, 1]);
            }
            else
            {
                fibo[n, 0] = fibonacci(n - 1).Item1 + fibonacci(n - 2).Item1;
                fibo[n, 1] = fibonacci(n - 1).Item2+ fibonacci(n - 2).Item2;
                return (fibo[n, 0], fibo[n, 1]);
            }
        }
    }
}