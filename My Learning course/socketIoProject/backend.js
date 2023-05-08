const app = require('express')();
const http = require('http').Server(app);
const io = require('socket.io')(http);

app.get('/', (req,res)=>{
    res.sendFile("E:/Computer_System-Engineering/My Learning course/socketIoProject/chatUI.html");
})
users = [];
io.on('connection',(socket)=>{
    console.log("User Connected ");
    socket.on('setUsername', (data)=>{
        if(users.indexOf(data)> -1){
            socket.emit('userExists', data + 'username is already taken')
            console.log(data);
        }
        else{
            users.push(data);
            socket.emit('userSet',{"username": "data"});
        }
    });
    socket.on('msg',(data)=>{
        io.sockets.emit('newmsg',data);
    })
})


http.listen(3000, ()=>{
    console.log("listening on PORT 3000 ");
})