using System;
using System.Text;

namespace Program
{
    class Program
    {
        static void Main()
        {
            StringBuilder sb = new StringBuilder();

            string[] mn = Console.ReadLine().Split();
            int m = int.Parse(mn[0]);
            int n = int.Parse(mn[1]), sqrt_n = (int)Math.Sqrt(n);
            bool[] nums = new bool[n + 1];

            for (int i = 2; i <= sqrt_n; i++)
            {
                if (nums[i])
                    continue;

                for (int j = i * 2; j <= n; j += i)
                {
                    nums[j] = true;
                }
            }

            for (int i = Math.Max(m, 2); i <= n; i++)
            {
                if (!nums[i])
                    sb.AppendLine($"{i}");
            }

            Console.WriteLine(sb);
        }
    }
}
