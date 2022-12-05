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
            int n = int.Parse(Console.ReadLine());
            int[] dp = new int[n + 1];
            dp[0] = dp[1] = 0;
            for (int i = 2; i <= n; i++)
            {
                dp[i] = dp[i - 1] + 1;

                if (i % 2 == 0)
                    dp[i] = Math.Min(dp[i], dp[i / 2] + 1);
                if (i % 3 == 0)
                    dp[i] = Math.Min(dp[i], dp[i / 3] + 1);
            }
            Console.WriteLine(dp[n]);
        }
        
    }
}