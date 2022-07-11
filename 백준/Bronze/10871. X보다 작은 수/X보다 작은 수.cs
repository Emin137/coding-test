string[] input1 = Console.ReadLine().Split();
            string[] input2 = Console.ReadLine().Split();

            int num1 = int.Parse(input1[0]);
            int num2 = int.Parse(input1[1]);

            for (int i = 0; i < num1; i++)
            {
                if (int.Parse(input2[i]) < num2)
                {
                    Console.Write(input2[i]);
                    Console.Write(" ");
                }
            }