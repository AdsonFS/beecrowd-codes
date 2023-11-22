using System;
using System.Linq;
using System.Collections;
					
public static class Program
{
	public static void Main()
	{
		Func<string> a = () => Console.ReadLine();
		
		Console.WriteLine(a().Split().Max(s => int.Parse(s)) + " eh o maior");
	}
	
	public static void Print(this IEnumerable x){
		foreach(var i in x)
			Console.Write($"{i} ");
		Console.WriteLine();
	}
}