string input = Console.ReadLine();
            string input2 = Console.ReadLine();
            string input3 = Console.ReadLine();

            int multifly = int.Parse(input) * int.Parse(input2) * int.Parse(input3);

            string str = multifly.ToString();

            char[] chars = new char[10];
            int[] number = new int[10];
            for (int i = 0; i < 10; i++)
            {
                chars[i] = (char)((int)'0'+i);
            }
            for (int i = 0; i < str.Length; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (str[i] == chars[j])
                        number[j]++;
                }
            }

            for (int i = 0; i < 10; i++)
            {
                Console.WriteLine(number[i]);
            }