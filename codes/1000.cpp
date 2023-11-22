using System;
using System.Linq;
using System.Collections;
					
public static class Program
{
	public static void Main()
	{
		Console.WriteLine("Hello World!");
	}
	
	public static void Print(this IEnumerable x){
		foreach(var i in x)
			Console.Write($"{i} ");
		Console.WriteLine();
	}
}