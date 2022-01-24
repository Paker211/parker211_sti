"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
exports.router = void 0;
const auth_route_1 = __importDefault(require("./routes/auth.route"));
exports.router = [
    new auth_route_1.default(),
];
