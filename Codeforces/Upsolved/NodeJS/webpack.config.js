const path = require('path');
const HtmlWebpackPlugin = require('html-webpack-plugin');
const WebpackMd5Hash = require('webpack-md5-hash');
const CleanWebpackPlugin = require('clean-webpack-plugin');
const webpack = require('webpack');

module.exports = {  
    entry: 
    { 
        main: './src/index.js' 
    },  
        output: 
        {    
            path: path.resolve(__dirname, 'dist'),    
            filename: '[name].[chunkhash].js'  
        },  
        devServer: 
        {    
            contentBase: './dist',    
            hot: true,    
            open: true  
        },  
        module: 
        {    
            rules: 
            [      
                {         
                    test: /\.js$/,        
                    exclude: /node_modules/,        
                    use: 
                    [          
                        { 
                            loader: 'babel-loader' 
                        },          
                        {            
                            loader: 'eslint-loader',            
                            options: 
                            {               
                                formatter: require('eslint/lib/formatters/stylish')             
                            }           
                        }         
                    ]       
                }     
            ]  
        },  
        plugins: 
        [    
            new CleanWebpackPlugin('dist', {}),    
            new HtmlWebpackPlugin({      
                inject: false,      
                hash: true,      
                template: './src/index.html',      
                filename: 'index.html'    
            }),    
            new WebpackMd5Hash()  
        ]
    };
