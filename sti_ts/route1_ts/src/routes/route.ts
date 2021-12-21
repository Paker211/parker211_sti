import {Router} from "express";

abstract class Route {
  protected router = Router();
  protected abstract setRoutes(): void;
  protected prefix: string = '/';

  public getRouter() {
    return this.router;
  }

  public getPrexfix() {
    return this.prefix;
  }
}

export default Route;
