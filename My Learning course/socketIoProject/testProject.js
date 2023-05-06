const express = require('express')();
const http = require('http').Server(express);
const io = require('socket.io')(http);

express.get('/', (req,res)=>{
    res.sendFile('E:/Computer_System-Engineering/My Learning course/socketIoProject/index.html')
})
var clients=0;
// when someone connects this gets executed
io.on('connection', function(socket){ // io.on is a event handler
   // console.log("User Connected ");
    
    /* Sent an event from server to client*/
    /* setTimeout(()=>{
        //  socket.send('Sent a message 3 seconds after connection')
         socket.emit('testerEvent',{ // emits an event called testerEvent
            description:'A custom event named testerEvent '
         })
    },3000) */

    // **** Listner to listen event sent from client
    
    /*
    socket.on('clientEvent', (data)=>{
        console.log(data.name + " and "+ data.id);
    })
    */

    clients++;
    socket.emit('newclientconnect',{"description":"Hey, welcome! "});
    socket.broadcast.emit('newclientconnect', {"description" : `${clients} + 'client connected `})
   // console.log(clients);

    socket.on('disconnect',function(){
    clients--;
    socket.broadcast.emit('newclientconnect',{"description" : clients + 'client connected '})
})
})
http.listen(3000, ()=>{console.log('Listening on PORT: 3000');})