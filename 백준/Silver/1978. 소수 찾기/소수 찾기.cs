using System;
using System.Linq;
using System.Text;

namespace Program
{
    class Program
    {
        static void Main()
        {
            int N = int.Parse(Console.ReadLine());
            int[] ints = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int num = 0;

            for (int i = 0; i < N; i++)
            {
                bool isPrime = true;
                if (ints[i] == 1) continue;
                for (int j = 2; j <= ints[i]/2; j++)
                {
                    if (ints[i] % j == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
                if (isPrime)
                    num++;
            }
            Console.WriteLine(num);
        }
    }
}