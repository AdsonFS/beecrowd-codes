using System; 

class URI {

    static void Main(string[] args) { 
            string str;
            int n, x1, x2;
            n = int.Parse(Console.ReadLine());
            for (int i = 0; i < n; i++)
            {
                str = Console.ReadLine();
                string[] ss = str.Split(' ');
                x1 = int.Parse(ss[0]);
                x2 = int.Parse(ss[1]);
                string vet = "";
                for(int j = x1; j <= x2; j++)
                    vet += Convert.ToString(j);
                Console.Write(vet);
                int tam = vet.Length - 1;
                for (int j = tam; j >= 0; j--)
                    Console.Write(vet[j]);
                Console.Write("\n");
            }
    }

}