string[] input = Console.ReadLine().Split();
            int num1 = int.Parse(input[0]);
            int num2 = int.Parse(input[1]);
            int gcd = 0;


            for (int i = 1; i <= num1 && i <= num2; i++)
            {
                if (num1 % i == 0 && num2 % i == 0)
                    gcd = i;
            }
            Console.WriteLine(gcd);

            int lcm = 0;
            for (int i = num1*num2; i >= 1; i--)
            {
                if (i%num1 == 0 && i%num2 == 0)
                    lcm = i;
            }
            Console.WriteLine(lcm);