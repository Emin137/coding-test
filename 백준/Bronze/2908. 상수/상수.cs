 string input = Console.ReadLine();
            char[] reverse;
            reverse = input.ToCharArray();
            Array.Reverse(reverse);
            string[] output = new string(reverse).Split(' ');
            int num1 = int.Parse(output[0]);
            int num2 = int.Parse(output[1]);
            if(num1>num2)
                Console.WriteLine(num1);
            else
                Console.WriteLine(num2);