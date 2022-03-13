import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Scanner;
import java.lang.RuntimeException;
/*
 	https://tanaykulkarni27.github.io/json_parsing/DATA.json
 */
class fetch{
	public static String fetch_url(String u){
		try{
			URL url = new URL(u);
			HttpURLConnection conn = (HttpURLConnection) url.openConnection();
			conn.setRequestMethod("GET");
			conn.connect();
			int res_code = conn.getResponseCode();
			if(res_code != 200){
				throw new RuntimeException("RESPONSE CODE " + res_code);
			}
			Scanner sc = new Scanner(url.openStream());
			String inline = "";
			while(sc.hasNext())
			{
				inline+=sc.nextLine();
			}
			sc.close();
			return inline;
		}catch(Exception e){
			e.printStackTrace();
		}
		
		return "";
	}
	public static void main(String[] args) {
		fetch_url("https://tanaykulkarni27.github.io/json_parsing/DATA.json");
	}
}
