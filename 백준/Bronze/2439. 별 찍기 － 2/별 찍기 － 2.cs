string input = Console.ReadLine();
            int line = int.Parse(input);

            for (int i = 0; i < line; i++)
            {
                for (int a = line-i-1; a > 0; a--)
                {
                    Console.Write(' ');
                }

                for (int b = 0; b < i+1; b++)
                {
                    Console.Write('*');
                }
                Console.Write('\n');
            }