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
            int L = int.Parse(Console.ReadLine());
            string str = Console.ReadLine();
            double result = 0;
            long mod = 1234567891;
            for (int i = 0; i < L; i++)
            {
                int index = 0;
                for (int j = 0; j < 27; j++)
                {
                    if ((char)96 + j == str[i])
                        index = j;
                }
                result += index * Pow(i);
                result %= mod;
            }
            Console.WriteLine(result);
        }

        static double Pow(int num)
        {
            long mod = 1234567891;
            double result = 1;
            for (int i = 1; i <= num; i++)
            {
                result = 31 * result;
                result %= mod;
            }
            return result;
        }
    }

}