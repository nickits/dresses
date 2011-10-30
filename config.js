{
	"service" : {
	    "list" : [
		{"api" : "http", "ip" : "127.0.0.1" , "port" : 8080}
//		{"api" : "http", "ip" : "10.3.12.184" , "port" : 8080}
	    ]
	},
	"http" : {
// 		"script" : "/dresses"
		"script_names" : [ "/dresses", "/admin" ] 
	  
	},
	"file_server" : {
		"enable" : true,
		"doument_root" : "."
	},
	"views" : {  
		"paths" : [ "." ],  
		"skins" : [ ]  
	},
        "session" : {
                "location" : "server",
		"server" : {
                        "storage" : "files"
                }
        }  
}
