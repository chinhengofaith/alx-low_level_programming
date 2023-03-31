extern printf

section .data
msg:db "Hello, Holberton", 0
fmt:db"%s", 10, 0

section.text

globalmain
main:
pushrbp

movrdi,fmt
movrsi,msg
movrax,0
callprintf

poprbp

movrax,0
ret

