server {
    listen 80;
    server_name 3.109.19.112;

    
    location = /favicon.ico {
        access_log off;
        log_not_found off;
    }

    # Proxy requests to the Gunicorn socket
    location / {
        include proxy_params;
        proxy_pass http://unix:/run/gunicorn.sock;

       
    }
}
