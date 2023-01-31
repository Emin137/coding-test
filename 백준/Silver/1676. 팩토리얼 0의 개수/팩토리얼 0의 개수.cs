using System;

namespace 코테
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());
            int two = 0;
            int five = 0;
            for (int i = 1; i <= N; i++)
            {
                int temp = i;
                while(temp%2==0)
                {
                    two++;
                    temp /= 2;
                }
                while(temp%5==0)
                {
                    five++;
                    temp /= 5;
                }
            }

            string str;
            str = two > five ? five.ToString() : two.ToString();
            Console.WriteLine(str);
        }
    }
}
