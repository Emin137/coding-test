            int N = int.Parse(Console.ReadLine());
            int count = 1;
            int index = 1;
            for (int i = 1; i <= N; i++)
            {
                if(i>index)
                {
                    index += 6 * count;
                    count++;
                }
            }
            Console.WriteLine(count);