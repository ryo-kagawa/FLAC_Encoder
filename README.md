# FLAC_Encoder

FLACのバージョンアップ時に作ったプログラムです  
32bitの場合はRelease/x86を64bitの場合はRelease/x64を利用してください  

flac.iniの中の記述を変更してください  
fileDirをFLACファイルのパスに書き換えてください  
encodeOptionを利用したいエンコードオプションに書き換えてください  
decodeOptionを利用したいデコードオプションに書き換えてください  

FLAC_Encoder.exeにフォルダーをドラッグアンドドロップするとそのフォルダー内を再帰的に全てのwavとflacをflacにエンコードします  
・wavファイルをflacにエンコードします  
・flacファイルをwavにデコード後にflacに再エンコードします  
