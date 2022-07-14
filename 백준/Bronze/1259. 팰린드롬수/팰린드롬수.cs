 string input;
            char[] inputReverse;
            while(true)
            {
                input = Console.ReadLine();
                if (int.Parse(input) == 0)
                    return;
                inputReverse = input.ToCharArray();
                Array.Reverse(inputReverse);
                string output = new string(inputReverse);
                if (input == output)
                {
                    Console.WriteLine("yes");
                }
                else
                    Console.WriteLine("no");
            }