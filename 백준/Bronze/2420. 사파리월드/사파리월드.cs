string[] input = Console.ReadLine().Split();
            long output = long.Parse(input[1]) - long.Parse(input[0]);
            if (output > 0)
            {
                Console.WriteLine(output);
            }
            else
                Console.WriteLine(output*-1);